#include <bits/stdc++.h>
using namespace std;
const int nax = 1e5+10;
int ans=0,n,m;
vector<int> tree[nax];
bool vis[nax];
int a[nax];

void dfs(int u,int sum_cat)
{
  vis[u]=true;
  int sum=0;
  if(sum_cat>m)
  return;
  bool ok = false;

  for(int v=0;v<tree[u].size();v++)
  {
    if(!vis[tree[u][v]])
    {
      if(a[tree[u][v]]==1)
      sum=sum_cat+1;
      else
      sum=0;
      dfs(tree[u][v],sum);
      ok=true;
    }
  }
  if(!ok)
  ans++;
}

int main()
{
  cin >> n >> m;
  for(int i=1;i<=n;++i)
  {
    cin >> a[i];
  }

  for(int i=1;i<n;++i)
  {
    int u,v;
    cin >> u >> v;
    tree[u].push_back(v);
    tree[v].push_back(u);
  }
  dfs(1,a[1]);
  cout << ans << endl;

  return 0;
}
