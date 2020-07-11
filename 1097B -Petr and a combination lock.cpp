#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n],sum=0,flag=0;
  for(int i=0;i<n;++i)
  cin >> a[i];

  int m=1<<n;
  for(int i=0;i<m;++i)
  {
    sum=0;
    for(int j=0;j<n;++j)
    {
      if((1<<j)&i)
      sum+=a[j];
      else
      sum-=a[j];
    }
    if(sum==0 || sum%360==0)
    {
      flag=1;
      break;
    }
  }
  if(flag)
  cout << "YES\n";
  else
  cout << "NO\n";
  return 0;

}
