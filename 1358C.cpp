#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << (x2-x1)*(y2-y1)+1 << "\n";
  }
  return 0;
}
