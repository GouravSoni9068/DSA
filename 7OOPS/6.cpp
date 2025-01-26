#include<iostream>
using namespace std;
class chai{
    private:
        string name;
        int serving;
        friend bool compare(chai &chai1,chai&chai2);
    public:

        chai(string name,int serving)
        {
            this->name=name;
            this->serving=serving;
        }
};
bool compare(chai &chai1,chai&chai2)
{
    if(chai1.serving>chai2.serving)
    {
        return true;
    }
    return false;
}
int main()
{
    chai chai1("chai1",4);
    chai chai2("chai2",8);
    cout<<compare(chai1,chai2);
    return 0;
}