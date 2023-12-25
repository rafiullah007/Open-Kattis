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

    int b = 0, k = 0;

    for (char c : s) // for each loop
        {
        if (c == 'b') {
            b++;
        } else if (c == 'k') {
            k++;
        }
    }

    if (b > k) {
        cout << "boba" << endl;
    } else if (k > b) {
        cout << "kiki" << endl;
    } else if (b == 0 && k == 0) {
        cout << "none" << endl;
    } else {
        cout << "boki" << endl;
    }

    return 0;
}

