#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> &v)
{
    cout<<v[0];
    cout<<v[1];
    cout<<v[2];
}

int main()
{
    vector<int> v={1,2,3};
    solve(v);

    // cout<<v.back();

}