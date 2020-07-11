#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n,f=1;
  cin >> n;
  vector<pair<int,int>> p(n);

  for(int i=0;i<n;++i)
  {
    cin >> p[i].first >> p[i].second;
  }
  sort(p.begin(),p.end());

  for(int i=0;i<n-1;++i)
  {
    if(p[i].second>p[i+1].second)
    {
      f=0;
      break;
    }
  }
  if(f==0)
  {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";

  int a=0,b=0;
  for(int i=0;i<n;++i)
  {
    for(int j=a;j<p[i].first;++j)
    cout << 'R';
    a=p[i].first;
    for(int j=b;j<p[i].second;++j)
    cout << 'U';
    b=p[i].second;
  }
cout << endl;

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int t;
  cin >> t;
  for(int i=0;i<t;++i)
  {
    solve();
  }
}
