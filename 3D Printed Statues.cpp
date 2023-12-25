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



    /*

     s = statues
     d = days
     p = printers
     sum = statuesPrinted

    */

int main ()
{
        int s ;
        cin>>s;
        int p = 1;
        int sum = 0;
        int d = 0;

        while(sum < s){
            if((s-sum) > p){
                d += 1;
                p += p;
            }
            else {
                d += 1;
                sum += p;
            }
        }

        cout<<d<<endl;
    }

