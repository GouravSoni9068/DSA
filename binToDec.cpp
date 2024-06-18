#include<iostream>
using namespace std;
void binToDec(int bin)
{
    int dec=0;
    int pow=1;
    while(bin!=0)
    {
        int lastDig=bin%10;
        dec+=(lastDig*pow);
        pow*=2;
        bin/=10;
    }
    cout<<dec;
}

int main()
{
    binToDec(110110);
    
    return 0;
}