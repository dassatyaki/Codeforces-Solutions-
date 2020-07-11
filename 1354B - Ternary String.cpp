#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;

  int a1=-1,a2=-1,a3=-1,mn=INT_MAX,mx=-1,ans=INT_MAX;

  for(int i=0;i<s.length();++i)
  {
    if(s[i]=='1')
    a1=i;
    else if(s[i]=='2')
    a2=i;
    else if(s[i]=='3')
    a3=i;
    if(a1>-1 && a2>-1 && a3>-1)
    {
      mn=min(a1,min(a2,a3));
      mx=max(a1,max(a2,a3));
      ans=min(ans,mx-mn+1);
    }
  }
  if(ans==INT_MAX)
  cout << 0 << endl;
  else
  cout << ans << endl;

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  for(int i=0;i<t;++i)
  {
    solve();
  }
}
