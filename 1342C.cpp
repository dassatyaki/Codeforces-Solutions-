#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
  int a,b,q;
  cin >> a >> b >> q;
  ll g = __gcd(a,b);
  ll lcm = (a*b)/g;
  // cout << l << endl;
  ll x = lcm-max(a,b);
  // cout << x << '\n';
  for(int i=0;i<q;++i)
  {
    ll l,r;
    cin >> l >> r;

    ll cnt1 = (l-1)/lcm*x;
    ll rem1 = (l-1)%lcm;
    ll ans1 = cnt1+max(0ll,rem1-max(a,b)+1);


    ll cnt2 = (r)/lcm*x;
    ll rem2 = (r)%lcm;
    ll ans2 = cnt2+max(0ll,rem2-max(a,b)+1);

    cout << ans2-ans1 << ' ';
  }
  cout << endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  for(int i=0;i<t;++i)
  {
    solve();
  }
}
