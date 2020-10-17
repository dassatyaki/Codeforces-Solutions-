#include <bits/stdc++.h>
using namespace std;
const int nax = 2e5+10;

int word(string s,int a,int b)
{
  int res=0;
  for(int i=0;i<s.length();++i)
  {
    if(s[i]-'0'==a)
    {
      res++;
      swap(a,b);
    }
  }
  if(a!=b && res%2==1)
  --res;

  return res;
}

void solve()
{
  int ans=0;
  string s;
  cin >> s;
  long int n = s.length();

  for(int i=0;i<10;++i)
  {
    for(int j=0;j<10;++j)
    {
      ans = max(ans,word(s,i,j));
    }
  }
  cout << n-ans << '\n';
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
