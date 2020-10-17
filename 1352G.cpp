#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n,i;
  cin >> n;
  if(n<4)
  {
    cout << "-1\n";
    return;
  }
  if(n%2==0)
  i=n-1;
  else
  i=n;
  for(;i>=1;i-=2)
  {
    cout << i << " ";
  }
  cout << "4 2 ";
  for(i=6;i<=n;i+=2)
  {
    cout << i << " ";
  }
  cout << "\n";
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
