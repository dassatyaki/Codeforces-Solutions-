#include <bits/stdc++.h>
using namespace std;

int divide(string s,char c)
{
  int mid = s.length()/2;
  if(s.length()==1)
  {
    int f = (s[0]==c)?0:1;
    return f;
  }

  int cntr = divide(string(s.begin(),s.begin()+mid),c+1) + s.length()/2 - count(s.begin()+mid,s.end(),c) ;
  int cntl = divide(string(s.begin()+mid,s.end()),c+1) + s.length()/2 - count(s.begin(),s.begin()+mid,c);

  return min(cntl,cntr);
}

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  cout << divide(s,'a') << endl;

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
