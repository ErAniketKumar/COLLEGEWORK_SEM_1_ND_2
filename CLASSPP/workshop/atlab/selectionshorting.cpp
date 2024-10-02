#include<iostream>
using namespace std;

void ss(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minidx])
            {
                minidx =j;
            }
        }
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ss(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}