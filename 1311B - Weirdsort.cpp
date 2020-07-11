#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n,m;
  cin >> n >> m;
  int a[n],p[m];

  for(int i=0;i<n;++i)
  cin >> a[i];

  for(int i=0;i<m;++i)
  cin >> p[i];

  for(int i=0;i<n;++i)
  {
    for(int j=m-1;j>=0;--j)
    {
      int k=p[j]-1;
      if(a[k]>a[k+1])
      swap(a[k],a[k+1]);
    }
  }
  int f=1;
  for(int i=0;i<n-1;++i)
  {
    if(a[i]>a[i+1])
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
  while(t--)
  {
    solve();
  }
}
