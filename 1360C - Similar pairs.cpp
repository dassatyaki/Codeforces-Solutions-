#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
  int n,e=0,o=0,cnt1=0;
  cin >> n;
  vector<int> a;
  for(int i=0;i<n;++i)
  {
    int val;
    cin >> val;
    a.push_back(val);
    if(val%2==0)
    e++;
    else
    o++;
  }

  if(e%2!=o%2)
  cout << "NO\n";
  else if(e%2==0 && o%2==0)
  cout << "YES\n";
  else
  {
    for(int i=0;i<n-1;++i)
    {
      for(int j=i+1;j<n;++j)
      {
        if(a[i]%2!=a[j]%2 && (abs(a[i]-a[j])==1))
        {
          cout << "YES\n";
          return;
        }
      }
    }
    cout << "NO\n";
  }

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
