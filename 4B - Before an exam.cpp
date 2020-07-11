#include <iostream>
using namespace std;

int main()
{
  int d,sumt,summin=0,summax=0;
  cin >> d >> sumt;
  int mn[d],mx[d];

  for(int i=0;i<d;++i)
  {
    cin >> mn[i] >> mx[i];
    summin+=mn[i];
    summax+=mx[i];
  }

  if(summin>sumt || summax<sumt)
  {
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";

  sumt-=summin;

  for(int i=0;i<d-1;++i)
  {
    if(mx[i]-mn[i]<sumt)
    {
      cout << mx[i] << " ";
      sumt-=mx[i]-mn[i];
    }
    else
    {
      cout << mn[i]+sumt << " ";
      sumt=0;
    }
  }
  cout << mn[d-1]+sumt << endl;
return 0;

}
