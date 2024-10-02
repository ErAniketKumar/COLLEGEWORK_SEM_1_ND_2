#include<iostream>
using namespace std;
int main()
{
    int n=6;
   int arr[n]={1,6,5,4,3,2};
 for(int i=0;i<n-1;i++)
 {
   for(int j=0;j<n-1-i;j++)
   {
     if(arr[j]>arr[j+1])
     {
       int temp=arr[j+1];
       arr[j+1]=arr[j];
       arr[j]=temp;
     }
   }
 }
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }


    return 0;
}