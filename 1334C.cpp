#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  ll n,j;
  cin >> n;

  vector<pair<ll,ll>> v;
  ll mn = 1e18;
  for(ll i=0;i<n;++i)
  {
    ll a,b;
    cin >> a >> b;
    v.push_back(make_pair(a,b));
  }
  ll bullets = 0;
  for(int i=0;i<n;++i)
  {
    int j = (i+1)%n;
    bullets+=max(0LL,v[j].first-v[i].second);
    mn = min(mn,min(v[i].second,v[j].first));
  }
  bullets+=mn;
  cout << bullets << '\n';
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}
