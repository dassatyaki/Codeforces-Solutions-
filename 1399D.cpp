#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int n,newpos;
      cin >> n;
      string s;
      cin >> s;
      vector<int> pos0,pos1,ans(n);

      for(int i=0;i<n;++i)
      {
        newpos = pos0.size()+pos1.size();
        if(s[i]=='0')
        {
          if(pos1.size()==0)
          pos0.push_back(newpos);
          else
          {
            newpos=pos1.back();
            pos1.pop_back();
            pos0.push_back(newpos);
          }
        }
        else
        {
          if(pos0.size()==0)
          pos1.push_back(newpos);
          else
          {
            newpos = pos0.back();
            pos0.pop_back();
            pos1.push_back(newpos);
          }
        }
        ans[i]=newpos;
      }
      cout << pos0.size()+pos1.size() << endl;
      for(int i=0;i<ans.size();++i)
      cout << ans[i]+1 << " ";
      cout << endl;
    }
    return 0;
}
