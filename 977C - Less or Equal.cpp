#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin >> n >> k;

  vector<int> a;
  for(int i=0;i<n;++i)
  {
    int val;
    cin >> val;
    a.push_back(val);
  }
  sort(a.begin(),a.end());

  if(a[k-1]==a[k])
  cout << -1 << endl;
  else
  if(k==0)
  {
    if(a[0]==1)
    cout << -1 << endl;
    else
    cout << a[0]-1 << endl;
  }
  else
  cout << a[k-1] << endl;

  return 0;
}
