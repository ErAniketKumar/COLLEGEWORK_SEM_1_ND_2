#include<iostream>
using namespace std;
int sum=0;
int f(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           sum+=arr[i];
        }
    }
}
void acpt(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int n;cin>>n;
    int arr[n];
    acpt(arr,n);
    int ans=f(arr,n);
    cout<<ans;
    
    return 0;
}