#include <iostream>
using namespace std;

 /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int CurrentYear (int i , int k)
{
    return (2023 + i  / k )-1 ;
}
    /*

    i = improvements
    k = improvementsPerYear

    */
int main()
{
    int i , k;
    cin >> i  >> k;
    cout << CurrentYear(i,k)<< endl;
    return 0;
}
