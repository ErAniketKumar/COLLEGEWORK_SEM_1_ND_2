#include<iostream>
using namespace std;
int nrev(int *arr,int n)
{
    int m;
    if(n%2==0)
    {
        m=(n/2);
    }
    else{
        m=(n/2)+1;
    }
    
for(int i=m;i<n;i++)
{
    int temp=arr[n-1];
    arr[n-1]=arr[i];
    arr[i]=temp;

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
    nrev(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}