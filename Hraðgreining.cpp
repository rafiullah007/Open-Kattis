#include <iostream>
#include <string>
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
    string s;
    cin >> s;


    if (s.find("COV") != string::npos) {
        cout << "Veikur!" << endl;
    } else {
        cout << "Ekki veikur!" << endl;
    }

    return 0;
}
