#include <bits/stdc++.h>
using namespace std;
const int nax = 2e5+10;
int m[nax][26];

void solve()
{
  int n,k,ans=0,mx,res;
  string s;
  cin >> n >> k >> s;

  for(int i=0;i<k;++i)
  {
    for(int j=0;j<26;++j)
    {
        m[i][j]=0;
    }
  }

  for(int i=0;i<n;++i)
  {
    m[i%k][s[i]-97]++;
  }
  int cnt = n/k;
  for(int i=0;i<k/2;++i)
  {
    mx=INT_MIN,res=0;
    for(int j=0;j<26;++j)
    {
      res=m[i][j]+m[k-i-1][j];
      mx = max(mx,res);
    }
    ans+=2*cnt-mx;
  }

  if(k%2==1)
  {
    mx = INT_MIN,res=0;
    for(int j=0;j<26;++j)
    {
      res = m[k/2][j];
      mx = max(mx,res);
    }
    ans+=cnt-mx;
  }
  cout << ans << endl;

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
