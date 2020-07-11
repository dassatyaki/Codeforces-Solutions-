#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int n,flag=1;
      cin >> n;
      string s,ans;
      cin >> s;

      for(int i=0;i<n-1;++i)
      {
        if(s[i]>s[i+1])
        flag=0;
      }
      if(flag)
      {
        cout << s << endl;
        continue;
      }

      for(int i=0;i<n;i++)
      {
        if(s[i]=='1')
        break;
        ans.push_back('0');
      }
      ans.push_back('0');
      for(int i=n-1;i>=0;--i)
      {
        if(s[i]=='0')
        break;
        ans.push_back('1');
      }
      cout << ans << endl;
    }
    return 0;
}
