#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,s,k,val;
    cin >> n >> s >> k;

    vector<int> a;

    for(int i=0;i<k;++i)
    {
      cin >> val;
      a.push_back(val);
    }

    for(int i=0;i<=k;++i)
    {
      if(s-i>=1 && find(a.begin(),a.end(),s-i)==a.end())
      {
        cout << i << endl;
        break;
      }
      if(s+i<=n && find(a.begin(),a.end(),s+i)==a.end())
      {
        cout << i << endl;
        break;
      }
    }

  }
  return 0;
}
