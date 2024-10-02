#include<iostream>
using namespace std;
int sumofn(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n+sumofn(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int sum=sumofn(n);
    cout<<sum;
    return 0;
}