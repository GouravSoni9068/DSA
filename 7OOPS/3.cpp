#include<iostream>
using namespace std;
class base{
    public:
        int a;
        int b;
        base(int a,int b)
        {
            this->a=a;
            this->b=b;
            cout<<"base constructor"<<endl;
        }
        ~base()
        {
            cout<<"base destructor"<<endl;
        }
};
class derived : public base{
    public:
        int c;
        derived(int a,int b,int c):base(a, b)
        {
            this->c=c;
            cout<<"derived constructor"<<endl;
        }
        ~derived()
        {
            cout<<"derived destructor"<<endl;
        }
        void getInfo()
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }

};
int main()
{
    derived d1(5,4,3);
    d1.getInfo();
    return 0;
}