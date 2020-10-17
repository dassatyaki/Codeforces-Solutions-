#include <bits/stdc++.h>
using namespace std;
const int nax = 1e4;
#define ll long long

void solve()
{
  ll n,ans=0;
  cin >> n;
  ll a[nax],cnt[nax]={0};
  for(int i=1;i<=n;++i)
  {
    cin >> a[i];
    cnt[i]=0;
  }
  for(int i=1;i<=n;++i)
  {
    ll sum=a[i];
    for(int j=i+1;j<=n;++j)
    {
      sum+=a[j];
      if(sum>8000)
      break;
      cnt[sum]=1;
    }
  }
  for(int i=1;i<=n;++i)
  {
    if(cnt[a[i]]==1)
    ++ans;
  }

  cout << ans << '\n';
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}
