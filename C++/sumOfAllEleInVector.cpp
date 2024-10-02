#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    int sum=0;
    for(int i=0;i<5;i++)
    { 
        sum=sum+v[i];
    }
    cout<<sum;

    return 0;
}
