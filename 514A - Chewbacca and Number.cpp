#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    string x=to_string(n);

    for(int i=0;i<x.size();++i)
    {
        char c=x[i];
        int r=c-'0';

        if(r==9 && i==0)
        cout << 9;
        else if(r>=5)
        cout << 9-r;
        else
        cout << r;
    }
    cout << endl;
    
    return 0;

}
