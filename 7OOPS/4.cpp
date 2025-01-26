#include<iostream>
using namespace std;

class person{
    public:
        

        virtual void getInfo()
        {
            cout<<"Hello form person";
        }

};
class student: public person{
    public:
        
        void getInfo()
        {
            cout<<"Hello from student";
        }
};
int main()
{   
    person* ptr;
    student s1;
    ptr=&s1;
    ptr->getInfo();
    return 0;
}