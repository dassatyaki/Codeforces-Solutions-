#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector<int> a,b;

    for(int i=0;i<n;++i)
    {
      int val;
      cin >> val;
      a.push_back(val);
    }
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    while(i<=j)
    {
      if(i==j)
      {
        b.push_back(a[i]);
        break;
      }
      b.push_back(a[i]);
      b.push_back(a[j]);
      i++;j--;
    }
    for(int i=n-1;i>=0;--i)
    cout << b[i] << " ";

    cout << endl;
  }
  return 0;
}
