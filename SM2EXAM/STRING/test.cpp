#include<iostream>
using namespace std;
int fibbo(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return n-1+fibo(n-2);

}
int main()
{   
    int n;
    cin>>n;
    int ans=fibbo(n);
    cout<<ans;
     return 0;
}