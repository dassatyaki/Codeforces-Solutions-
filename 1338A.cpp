#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n;

  cin >> n;
  vector<ll> a(n);
  for(auto &it:a)
  {
    cin >> it;
  }
  ll sum_diff = 0,cnt=0,mx=a[0];
  for(int i=1;i<n;++i)
  {
    if(a[i]>mx)
    mx=a[i];
    sum_diff=max(sum_diff,mx-a[i]);
  }
  cnt=log2(sum_diff);
  if(sum_diff==0)
  cout << 0 << "\n";
  else
  cout << cnt+1 << '\n';

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
