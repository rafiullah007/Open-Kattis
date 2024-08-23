#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int main ()
{
    int b,l; int sum(0);
    cin>>b>>l;
    if(b==l)
    {
        sum = b+l;
    }
      else  if(b>l && l!=0)
    {
        sum = l+l;
    }
     else   if(b<l && b!=0)
    {
        sum = b+b;
    }
    cout<<sum<<endl;
}
