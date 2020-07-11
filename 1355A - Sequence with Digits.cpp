#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getAdd(ll n)
{
    ll mn=10,mx=-1;
    while(n)
    {
        ll r=n%10;
        if(r<mn)
        mn=r;
        if(r>mx)
        mx=r;
        n/=10;
    }
    return mn*mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        while(k--!=1)
        {
            ll x = getAdd(n);
            if(x==0)
            break;
            n+=x;
        }
        cout << n << "\n";

    }
    return 0;
}
