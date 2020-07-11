#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
  ll i,n,ans=0,k,sumd=0;
  cin >> n;
  k=n;
  while(k)
  {
    k/=10;
    ++sumd;
  }
  if(sumd==1)
  {
    cout << n << "\n";
    return 0;
  }

  for(i=1;i<sumd;++i)
  {
    ans+=(pow(10,i)-pow(10,i-1))*i;
  }
  ans+=(n-(pow(10,sumd-1)-1))*i;
  cout << ans << "\n";

  return 0;
}
