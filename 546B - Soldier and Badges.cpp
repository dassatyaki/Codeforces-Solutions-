#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n,cnt=0;
  cin >> n;
  int a[n];
  for(int i=0;i<n;++i)
  {
    cin >> a[i];
  }

  for(int i=0;i<n+10000;++i)
  {
      sort(a,a+n);
      for(int j=0;j<n-1;++j)
      {
        if(a[j]==a[j+1])
        {
          a[j+1]++;cnt++;
        }
      }
  }
  cout << cnt << endl;
  return 0;
}
