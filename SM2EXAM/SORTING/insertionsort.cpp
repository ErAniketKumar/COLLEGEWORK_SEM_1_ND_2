#include<iostream>
using namespace std;
 void inssort(int *arr, int n)
 {
   //logic
   for(int i=1;i<n;i++)
   {
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key) // pichhe wale ele se compaire
    {
        arr[j+1]=arr[j];//righ shift
        j--;
    }
    arr[j+1]=key;// element ka right place par put 
   }
   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 }
int main()
{
   int arr[] = { 12, 11, 13, 5, 6 };
    inssort(arr,5);
return 0;
}