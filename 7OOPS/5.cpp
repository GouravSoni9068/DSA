#include<iostream>
using namespace std;
class complex{
    public: 
        int real;
        int img;
        complex(int real,int img)
        {
            this->real=real;
            this->img=img;
        }
        complex()
        {
            this->real=0;
            this->img=0;
        }
        void print()
        {
            cout<<real<<"+i"<<img<<endl;
        }
        complex operator +(const complex& c)
        {
            complex ans;
            ans.real=this->real+c.real;
            ans.img=this->img+c.img;
            return ans;
        }
};


int main()
{
    complex c1(3,4);
    complex c2(4,3);
    c1.print();
    c2.print();
    complex c3=c1+c2;
    c3.print();
    return 0;
}