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

int main() {
    string s;
    cin >> s;

    string E;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        E += c;

        if (c == 'e') {
            E += 'e';
        }
    }

    cout<< E <<endl;

    return 0;
}

