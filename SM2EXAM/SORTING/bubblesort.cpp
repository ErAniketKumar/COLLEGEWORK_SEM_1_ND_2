#include<iostream>
using namespace std;
 void bubblesort(int *arr, int n)
 {
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
  
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 }
int main()
{
    int arr[5]={65,25,12,22,11};
    bubblesort(arr,5);
return 0;
}