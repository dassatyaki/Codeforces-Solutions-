#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
  int n,i,j;
  cin >> n;
  vector<int> a(n+1,0);
  int free=0;
  for(int i=1;i<=n;++i)
  {
    int k,done=0;
    cin >> k;
    while(k--)
    {
      int g;
      cin >> g;
      if(done)
      continue;
      if(a[g]==1)
      continue;

      a[g]=1;
      done=1;
    }
    if(done==0)
    free=i;
  }

  if(free==0)
  cout << "OPTIMAL\n";
  else
  {
    cout << "IMPROVE\n";
    cout << free << " " ;
    for(int i=1;i<=n;++i)
    {
      if(a[i]==0)
      {
        cout << i << endl;
        break;
      }
    }
  }

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
