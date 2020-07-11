#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  ll n,m;
  cin >> n;
  ll v[n]={0},b[n]={0};

  for(ll i=1;i<=n;++i)
  {
    cin >> v[i];
    b[i]=v[i];
  }

  sort(b+1,b+n+1);
  for(ll i=2;i<=n;++i)
  {
    b[i]+=b[i-1],v[i]+=v[i-1];
  }
  cin >> m;
  for(ll i=0;i<m;++i)
  {
    ll type,l,r;
    cin >> type >> l >> r;
    if(type==1)
    cout << v[r]-v[l-1] << endl;
    else
    cout << b[r]-b[l-1] << endl;

  }
    return 0;
  }
