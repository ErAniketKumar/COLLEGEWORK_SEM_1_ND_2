#include<iostream>
using namespace std;
int leader(int *arr,int n)
{
  
  for(int i=0;i<n;i++)
  {
    int key=arr[i];
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]>arr[i])
        {
            arr[i]=arr[j];
            break;
        }
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
    leader(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}