#include<iostream>
using namespace std;
class student
{
    public:
        string name;
        double *cgpa;
        student(string name,double cgpa)
        {
            this->name=name;
            this->cgpa=new double;
            *(this->cgpa)=cgpa;
        }
        student(student &obj)
        {
            this->name=obj.name;
            this->cgpa=new double;
            *(this->cgpa)=*(obj.cgpa);
            
        }
        ~student()
        {
            cout<<"Element Delete"<<endl;
            delete cgpa;
        }

        void info()
        {
            cout<<name<<"    "<<*cgpa<<endl;
        }
};
int main()
{
    // student s1("Gourav",8);
    // s1.info();
    // student s2(s1);
    // *(s2.cgpa)=8.5;
    // s1.info();
    // s2.info();

    int* a =new int;
    *a=10;
    cout<<*a;

    return 0;
}