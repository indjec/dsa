#include <iostream>
using namespace std;
int m = 5, n = 3;
int main()
{
    int student[m];
    int stu[n];
    // int size=30;
    // char name;
    int i, j;
    
    for (i = 0; i < m; i++)
    {
        cout<<"Enter details of student "<<i+1<<":"<<endl;
        for (j = 0; j < 1; j++)
        {
            cout<<"Enter Name:";
            cin>>stu[0];
            cout<<"Enter Roll:";
            cin>>stu[1];
            cout<<"Enter Dob:";
            cin>>stu[2];
        }
    }
    for (i = 0; i < m; i++)
    {
        cout<<"\nDetails of student "<<i+1<<":"<<endl;
        for (j = 0; j < n; j++)
        {
            cout<<stu[j];
        }
    }
}