#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll rem1[5]={0},rem2[5]={0};
    ll n,m,cnt1,cnt2,r1,r2,ans=0;
    cin >> n >> m;

    cnt1=m/5;
    r1=m%5;

    rem1[0]=rem1[1]=rem1[2]=rem1[3]=rem1[4]=cnt1;

    for(ll i=1;i<=r1;++i)
    ++rem1[i];

    cnt2=n/5;
    r2=n%5;

    rem2[0]=rem2[1]=rem2[2]=rem2[3]=rem2[4]=cnt2;

    for(ll i=1;i<=r2;++i)
    ++rem2[i];

    ans+=rem1[1]*rem2[4] + rem1[2]*rem2[3] + rem1[3]*rem2[2]+rem1[4]*rem2[1]+rem1[0]*rem2[0];

    cout << ans << endl;

    return 0;
  }
