#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
  ll ans=0,n,k;
  cin >> n >> k;
  vector<ll> a;
  for(int i=0;i<n;++i)
  {
    int val;
    cin >> val;
    a.push_back(val);
  }

  map<int,int> cnt;
  int mx=-1;
  for(auto &it:a)
  {
    if(it%k==0)
    continue;
    cnt[k-it%k]++;
    mx=max(mx,cnt[k-it%k]);
  }

  for(auto [key,value]:cnt)
  {
    if(value==mx)
    ans=k*1ll*(value-1)+key+1;
  }
  cout << ans << endl;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}
