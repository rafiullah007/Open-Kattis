#include<iostream>
using namespace std;
int main()
{
    int n,price,a,m,i;
    scanf("%d",&n);
    for(i=99;i<=9999;i=i+100)
    {
        a = n-i;
        if(a<10){
            a= i -n;
        }
        if(a<100){
            m = i+100-n;
            if(m<0){
                m = n-i-100;
            }
            if(a<m)
            {
                price = i;
            }
            else {
                price = i+100;
            }
            break;
        }
    }
    printf("%d",price);
}
