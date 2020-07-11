#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,even=0,odd=0,flag=0;
        cin >> n >> x;
        int arr[n];
        for(int i=0;i<n;++i)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
            even++;
            else odd++;
        }

        for(int i=1;i<=x && i<=odd;i+=2)
        {
          int ecnt=x-i;
          if(ecnt<=even)
          {
            flag=1;
            break;
          }
        }
        if(flag)
        cout << "Yes\n";
        else
        cout << "No\n";

        }
    return 0;
}
