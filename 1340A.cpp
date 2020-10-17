#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &it:a)
  {
    cin >> it;
  }

  for(int i=0;i<n-1;++i)
  {
    if(a[i+1]-a[i]>1)
    {
      cout << "No\n";
      return;
    }
  }
cout << "Yes\n";

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
