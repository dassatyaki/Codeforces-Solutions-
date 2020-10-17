#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  ll n;
  cin >> n;
  vector<ll> a(n),modulo(n);

  for(auto &it:a)
  {
    cin >> it;
  }
  // sort(a.begin(),a.end());

  int f=1;
  for(int i=0;i<n;++i)
  {
    ll r = ((i+a[i])%n+n)%n;
    modulo[i]=r;
  }
  sort(modulo.begin(),modulo.end());
  for(int i=0;i<n-1;++i)
  {
    if(modulo[i]==modulo[i+1])
    f=0;
  }
  if(f)
  cout << "YES\n";
  else
  cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;
  for(int i=0;i<t;++i)
  {
    solve();
  }
}
