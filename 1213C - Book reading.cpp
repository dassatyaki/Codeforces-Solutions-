#include <iostream>
#define ll long long
using namespace std;

void solve()
{
  ll n,m,sum=0;
  cin >> n >> m;
  ll k=n/(m*10);

  if(m%10==0)
  sum=0;
  else if(m%5==0)
  sum=25;
  else if(m%2==0)
  sum=40;
  else sum=45;

  sum*=k;

  for(ll i=(k*m*10)+m;i<=n;i+=m)
  {
    sum+=i%10;
  }
  cout << sum << "\n";
}

int main()
{
  int q;
  cin >> q;
  for(int i=0;i<q;++i)
  {
    solve();
  }
}
