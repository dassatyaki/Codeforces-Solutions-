#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll n,sum{0};
  cin >> n;
  vector<ll> a;

  for(ll i=0;i<n;++i)
  {
    ll val;
    cin >> val;
    a.push_back(val);
  }
  if(a.size()==1)
  {
    cout << a[0] << "\n";
    return 0;
  }

  sort(a.begin(),a.end());

  for(int i=0;i<a.size()-2;++i)
  {
    sum+=a[i]*(i+2);
  }
  sum+=(a[n-2]+a[n-1])*a.size();

  cout << sum << "\n";

return 0;

}
