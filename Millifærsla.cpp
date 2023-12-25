#include<iostream>
#include<algorithm>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

void output (int a, int b, int c)
{
    if(a<b&&a<c) cout<<"Monnei"<<endl;
    else if(a>b&&b<c) cout<<"Fjee"<<endl;
    else if(c<b&&a>c) cout<<"Dolladollabilljoll"<<endl;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    output(a,b,c);
}
