#include<iostream>
using namespace std;
void DecToBin(int dec)
{
    int bin=0;
    int pow=1;
    while(dec!=0)
    {
        int rem=dec%2;
        bin+=(rem*pow);
        pow*=10;
        dec/=2;
    }
    cout<<bin;
    
}
void DecToBin2(int dec)
{
    int bin=0;
    int pow=1;
    while(dec!=0)
    {
        int rem=dec&1;

        bin+=(rem*pow);
        pow*=10;
        dec= dec>>1;
    }
    cout<<bin;
    
}

int main()
{
    
    DecToBin2(20);
    
    return 0;
}