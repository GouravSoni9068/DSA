#include<iostream>
#include<vector>
using namespace std;
class Teacher
{
    public:
    Teacher(int a, int b)
    {
        cout<<"I am a Constructor"<<a<<b<<endl;

        this->salary=a;
    }
    Teacher()
    {
        cout<<"I am a Constructor";
    }
    string name;
    string dept;
    string subj;
    double salary;

    void changeDept(string dept)
    {
        this->dept=dept;
    }

};
int main()
{
    Teacher t1(5,6);
    Teacher t2(t1);
    cout<<t2.salary;

    
    return 0;
}