#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
           
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
         while(j>=0 and arr[j]>temp)
         {
            arr[j+1]=arr[j];
            j--;
         }
         arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}