#include <bits/stdc++.h>
using namespace std;

struct compare
{
  bool operator()(const pair<int,int> &a,const pair<int,int> &b)const
  {
    int l1 = a.second - a.first;
    int l2 = b.second - b.first;
    if(l1==l2)
    return a.first<b.first;
    else
    return l1>l2;
  }
};

void solve()
{
  int n;
  cin >> n;
  set<pair<int,int>,compare> s;
  s.insert(make_pair(0,n-1));
  vector<int> a(n);

  for(int i=1;i<=n;++i)
  {
    pair<int,int> p=*s.begin();
    s.erase(s.begin());
    int l = p.first,r=p.second;

    int index = (l+r)/2;
    if(index-l>0)
    s.insert(make_pair(l,index-1));
    if(r-index>0)
    s.insert(make_pair(index+1,r));
    a[index]=i;
  }
  for(auto k:a)
  {
    cout << k << " ";
  }
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}
