/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
#include<iostream>
using namespace std;

void printPatt(int n){
    int i=1;
    while(i<=(n)){
        int j=i;
        if(i>(n/2)+1){
            int no = (n)/2;
            j =(n/2+1)- (i%((n/2)+1));
        }
        int gaps = (n/2)-(j-1),k=1;

        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - (2*gaps);
        while(ch>=1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        
        cout<<"\n";
        i = i + 1;
    }
}


int main()
{
    int n=7;
    printPatt(n);
    
    return 0;
}
