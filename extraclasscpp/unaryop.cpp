#include<iostream>
using namespace std;
int main()
{
    int nper;
    cout<<"enter no of person\n";
    cin>>nper;
    int dis;
    int day;
    cout<<"enter the total day\n";
    cin>>day;
    cout<<"enter distance\n";
    while(nper--)
    {
       cin>>dis;
       int result=2*day*dis;
       cout<<"distance from both side"<<result<<"\n";
    }
    return 0;
}