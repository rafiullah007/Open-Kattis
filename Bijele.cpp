#include<iostream>
using namespace std;
    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */
int main()
{
    /*
    a[0] = king which will be 1
    a[1] = queen which will be 1
    a[2] = rooks which will be 2
    a[3] = bishops which will be 2
    a[4] = knights which will be 2
    a[5] = pawns which will be 8
    */

    int Value[] = {1, 1, 2, 2, 2, 8};
    int a[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 6; i++)
    {
        a[i] = Value[i] - a[i];
    }

    for(int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}


