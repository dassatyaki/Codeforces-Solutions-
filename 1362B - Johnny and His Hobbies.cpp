#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
    int n,mx=-1,flag=0;
    cin >> n;
    int a[n],b[n];

    for(int i=0;i<n;++i)
    {
      cin >> a[i];
    }
    sort(a,a+n);

    for(int k=1;k<=1024;++k)
    {
        for(int i=0;i<n;++i)
        {
          b[i]=a[i]^k;
        }
        sort(b,b+n);
        int f=1;
        for(int i=0;i<n;++i)
        {
          if(a[i]!=b[i])
          {
            f=0;
            break;
          }
        }
        if(f==1)
        {
          flag=1;
          cout << k << "\n";
          break;
        }
    }
    if(!flag)
    cout << -1 << "\n";

  }
  return 0;
}
