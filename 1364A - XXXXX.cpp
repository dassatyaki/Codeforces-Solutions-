#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--)
  {
    ll n,x,div=0,sum=0,total,mx;
    cin >> n >> x;
    vector<ll> a;

    for(ll i=0;i<n;++i)
    {
      ll val;
      cin >> val;
      a.push_back(val);
      if(val%x==0)
      ++div;
      sum+=a[i];
    }

    if(div==n)
    {
      cout << -1 << endl;
      continue;
    }
    if(sum%x!=0)
    {
      cout << n << endl;
      continue;
    }
      total=sum,mx=0;
      for(ll i=0;i<n;++i)
      {
        total-=a[i];
        if(total%x!=0)
        {
          mx=max(mx,n-i-1);
        }
      }
      total=sum;
      for(ll i=n-1;i>=0;--i)
      {
        total-=a[i];
        if(total%x!=0)
        {
          mx=max(mx,i);
        }
      }

    cout << mx << endl;
  }
  return 0;
}
