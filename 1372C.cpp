#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &it:a)
  {
    cin >> it;
  }
  int flag=1;
  for(int i=0;i<n-1;++i)
  {
    if(a[i]>a[i+1])
    flag=0;
  }
  if(flag)
  {
    cout << 0 << "\n";
    return;
  }
  int f1=0,f2=0,f3=0;
  for(int i=0;i<n;++i)
  {
    if(a[i]!=i+1)
    f1=1;
    if(a[i]==i+1 && f1==1)
    f2=1;
    if(a[i]!=i+1 && f2==1)
    f3=1;
  }
  if(f1 && f2 && f3)
  cout << 2 << '\n';
  else
  cout << 1 << '\n';
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
