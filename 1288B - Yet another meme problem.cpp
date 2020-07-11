#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,flag=1,sum=0;
        cin >> a >> b;

        while(b)
        {
            long long r=b%10;
            if(r!=9)
            flag=0;
            sum++;
            b/=10;
        }
        if(flag==1)
        sum++;

        cout << a*(sum-1) << endl;

    }
    return 0;
}
