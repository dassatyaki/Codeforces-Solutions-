#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum=0,mx=INT_MIN;
    for(auto &it:a)
    {
      cin >> it;
      sum+=it;
      if(it>mx)
      mx=it;
    }
    if(sum%2==1 || mx>(sum-mx))
    cout << "NO\n";
    else
    cout << "YES\n";

    return 0;
}
