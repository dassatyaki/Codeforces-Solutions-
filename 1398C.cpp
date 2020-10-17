#include <bits/stdc++.h>
using namespace std;
const int nax = 1e5+10;

void solve()
{
  int n;
  cin >> n;
  int a[nax];
  string s;
  cin >> s;
  long long ans = 0;

  for(int i=1;i<=n;++i)
  {
    a[i] = (s[i-1]-'0');
  }

  map<int,int> mp;

  long long sum = 0;
  mp[0]=1;
  for(int i=1;i<=n;++i)
  {
    sum+=a[i]-1;
    ans+=mp[sum];
    mp[sum]++;
  }
  cout << ans << '\n';

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }

}
