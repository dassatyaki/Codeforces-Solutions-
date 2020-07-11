#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll a[2*n+1];
        vector<ll> odd,even;

        for(ll i=1;i<=2*n;i++)
        {
          cin >> a[i];
          if(a[i]%2)
          even.push_back(i);
          else
          odd.push_back(i);
        }
        vector <pair <ll,ll>> p;

        for(ll i=0;i+1<odd.size();i+=2)
        {
            p.push_back({odd[i],odd[i+1]});
        }
        for(ll i=0;i+1<even.size();i+=2)
        {
            p.push_back({even[i],even[i+1]});
        }

        for(ll i=0;i<n-1;i++)
        cout << p[i].first << " " << p[i].second << endl;

    }
    return 0;
}
