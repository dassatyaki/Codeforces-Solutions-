#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,cnt=0;
    cin >> n;
    int a[n+1],f[n+1]={0};
    for(int i=1;i<=n;++i)
    {
      cin >> a[i];
      f[a[i]]++;
    }

    sort(a,a+n);

    for(int i=2;i<=n;++i)
    {
      int rem=f[i-1]%(i-1);
      f[i]+=rem;

    }
    for(int i=1;i<=n;++i)
    {
      cnt+=f[i]/i;
    }
    cout << cnt << endl;
  }
  return 0;
}
