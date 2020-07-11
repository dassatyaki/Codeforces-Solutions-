#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
  ll n,ans=0;
  cin >> n;
  ll a[n];
  for(ll i=0;i<n;++i)
  {
    cin >> a[i];
  }
  sort(a,a+n);
  ll p[n];
  for(ll i=0;i<n;++i)
  {
    p[i]=i+1;
  }
  for(ll i=0;i<n;++i)
  {
    ans+=abs(a[i]-p[i]);
  }
  cout << ans << "\n";
  return 0;
}
