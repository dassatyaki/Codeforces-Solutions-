#include <iostream>
using namespace std;

void solve()
{
  int n,f=1;
  cin >> n;
  int p[n+1]={0},c[n+1]={0};
  for(int i=0;i<n;++i)
  {
    cin >> p[i] >> c[i];
  }
  if(n==1)
  {
    if(p[0]>=c[0])
    cout << "YES\n";
    else
    cout << "NO\n";
    return;
  }
  for(int i=0;i<n-1;++i)
  {
    if(p[i]>p[i+1] || c[i]>c[i+1])
    f=0;
    if(c[i+1]-c[i]>p[i+1]-p[i])
    f=0;
    if(c[i]>p[i])
    f=0;
  }
  if(f==1)
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
  return 0;
}
