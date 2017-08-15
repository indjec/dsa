#include <iostream>
using namespace std;
template <class array>
void abc(array a, int n)
{
    cin.getline(a,n);
    cout<<a;
}
int main()
{
    char name[20];
    int roll,dob;
    abc(name,20);
    // abc(roll,dob);
}