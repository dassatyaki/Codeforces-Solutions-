#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<ll> a(n);
  for(auto &it:a)
  {
    cin >> it;
  }
  ll cnt=0,sum=0;
  set<ll> s;
  s.insert(0LL);
  for(int i=0;i<n;++i)
  {
    sum+=a[i];
    if(s.count(sum))
    {
      ++cnt;
      s.clear();
      sum=a[i];
      s.insert(sum);
      s.insert(0);
    }
    else
    s.insert(sum);
  }
  cout << cnt << '\n';
}
