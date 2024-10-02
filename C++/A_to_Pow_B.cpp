#include<iostream>
using namespace std;

void power(int x,int y)
{
    int p=1;
    for(int i=1;i<=y;i++)
    {
        p=p*x;

    }
    cout<<p;

}
int main()
{
int a,b;
cin>>a>>b;
power(a,b);
    return 0;
}