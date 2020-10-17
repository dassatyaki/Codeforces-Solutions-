#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    s="00"+s;
    int str=0;
    int l=s.length(),f=0;

    for(int i=0;i<l;++i)
    {
        for(int j=i+1;j<l;++j)
        {
            for(int k=j+1;k<l;++k)
            {
              str=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
              if(str%8==0)
              {
                cout << "YES\n" << str << "\n";
                return 0;
              }
            }
        }
      }

    cout << "NO\n";
    return 0;
}
