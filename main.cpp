#include<iostream>
using namespace std;
void decimalToBinary(int decNum)
{
    int bin=0;
    int pow=1;
    while(decNum!=0)
    {
        int rem=decNum%2;
        bin+=(rem*pow);
        pow*=10;
        decNum/=2;
    }
    cout<<bin;
}
int main(){
    
    decimalToBinary(1);
}