#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i=0;i<n;++i)
  {
    string s,str="";
    cin >> s;
    int f1=0,f2=0,f3=0,f=0;
    for(int j=0;j<s.length();++j)
    {
      if(s[j]=='R')
      f1=1;
      if(s[j]>=48 && s[j]<=57 && f1==1)
      f2=1;
      if(s[j]=='C' && f1 && f2)
      f3=1;
    }
    if(f1 && f2 && f3)
    f=1;

    if(f)
    {
      string row = s.substr(s.find('R')+1,s.find('C')-s.find('R')-1);
      string col = s.substr(s.find('C')+1);
      // cout << row << endl;
      int column = stoi(col);
      // cout << column << endl;
      int temp = column,p=26;
      // while(true)
      // {
      //   if(p>temp)
      //   break;
      //   p*=26;
      // }
      // p/=26;
      string r="";
      int t;
      // cout << p << endl;
      while(temp)
      {
        int t = temp%26;
        if(t==0)
        {
          r+='Z';
          temp/=26;
          --temp;
        }
        else
        {
          r+=char(t+'A'-1);
          temp/=26;
        }
      }
      reverse(r.begin(),r.end());
      str+=r+row;
    }
    else
    {
      int pos=-1;
      for(int i=0;i<s.length();++i)
      {
        if(s[i]>=48 && s[i]<=57)
        {
          pos = i;
          break;
        }
      }
      string row = s.substr(pos);
      str+='R'+row;
      str+='C';
      string column = s.substr(0,pos);
      int sum=0,p=1;
      for(int i=column.size()-1;i>=0;--i)
      {
        sum+=p*(s[i]-'A'+1);
        p*=26;
      }
      str+=to_string(sum);
    }
    cout << str << '\n';
  }
}
