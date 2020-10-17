#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int nax = 1e7+10;

int dp[nax][2];

int main()
{
  int n;
  cin >> n;
  dp[0][1]=1;

  for(int i=1;i<=n;++i)
  {
    dp[i][1]=(3LL*dp[i-1][0])%mod;
    dp[i][0]=(2LL*dp[i-1][0]+dp[i-1][1])%mod;
  }
  cout << dp[n][1] << "\n";

  return 0;
}
