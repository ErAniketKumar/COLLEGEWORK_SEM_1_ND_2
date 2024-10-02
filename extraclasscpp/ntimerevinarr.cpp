#include<iostream>
using namespace std;
int nrev(int *arr,int n)
{
    int m=n/2;
for(int i=0;i<m-1;i++)
{
    int temp=arr[m-1];
    arr[m-1]=arr[i];
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