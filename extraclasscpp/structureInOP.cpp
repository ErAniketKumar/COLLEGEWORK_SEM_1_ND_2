#include<iostream>
using namespace std;
int main()
{
    struct student {
        char rollNo[11];
        char name[100];
        float cgpa;

    };
    struct student x;
    cin>>x.rollNo;
    cin>> x.name;
    cin>>x.cgpa;
    cout<<x.rollNo<<" "<<x.name<<" "<<x.cgpa;
    
    return 0;
}