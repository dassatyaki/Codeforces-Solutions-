#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  int x;
  cin >> x;
  int n = s.length();
  vector<int> v(n);

  for(int i=0;i<n;++i)
  {
    v[i]=1;
  }
  for(int i=0;i<n;++i)
  {
    if(s[i]=='0')
    {
      if(i+x<n)
      v[i+x]=0;
      if(i-x>=0)
      v[i-x]=0;
    }
  }
  bool flag = true;
  for(int i=0;i<n;++i)
  {
    if(s[i]=='1')
    {
      if(i+x<n && i-x>=0)
      {
        if(v[i+x]==0 && v[i-x]==0)
        flag=false;
      }
      else if(i+x<n)
      {
        if(v[i+x]==0)
        flag=false;
      }
      else if(i-x>=0)
      {
        if(v[i-x]==0)
        flag=false;
      }
      else if(i-x<0 && i+x>=n)
      flag=false;
    }
  }
  if(!flag)
  {
    cout << -1 << "\n";
    return;
  }
  for(auto k:v)
  cout << k;
  cout << endl;

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}
