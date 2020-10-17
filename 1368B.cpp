#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll k,prod=1;
  cin >> k;
  string s="codeforces";

  ll f[11]={0};
  for(int i=1;i<=10;++i)
  {
    f[i]=1;
  }
  while(true)
  {
  if(prod>=k)
  break;
  for(ll i=1;i<=10;++i)
  {
      f[i]++;
      prod=(ll)pow(f[i],i)*(ll)pow(f[i]-1,10-i);
      if(prod>=k)
      break;
  }
}

for(ll i=1;i<=10;++i)
{
  for(ll j=1;j<=f[i];++j)
  cout << s[i-1];
}
cout << endl;

  return 0;
}
