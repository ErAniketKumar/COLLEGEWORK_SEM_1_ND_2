#include<iostream>
using namespace std;
int partiation(int *arr, int s, int e)
{
     int pivot=arr[s];
     int c=0;
     for(int i=s+1;i<=e;i++)
     {
        if(arr[i]<=pivot)
        {
            c++;
        }
     }
     int pivotidx=s+c;
     //placed at right position
     swap(arr[pivotidx],arr[s]);
     //left and right part sambhalo
     int i=s,j=e;
     while(i<pivotidx && j>pivotidx)
     {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotidx && j>pivotidx)
        {
             swap(arr[i],arr[j]);
        }
     }
     return pivotidx;
}
void quicksort(int *arr, int s,int e)
{
    if(s>=e)
    {
        return;
    }
    //partiation
    int p=partiation(arr,s,e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
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
    quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}