#include<iostream>
using namespace std;
void merge(int *arr, int s,int mid, int e)
{
    int i=s,j=mid+1,k=s;
    int brr[e];
    while(i<=mid && j<=e)
    {
        if(arr[i]<=arr[j])
        {
            brr[k]=arr[i];
            i++;
        }
        else{
            brr[k]=arr[j];
            j++;
        }
        k++;
    }
  if(i>mid)
  {
    while(j<=e)
    {
        brr[k]=arr[j];
        j++;k++;
    }
  }
  else{
    while(i<=mid)
    {
        brr[k]=arr[i];
        i++;k++;
    }
  }
  for(int k=s;k<=e;k++)
  {
    arr[k]=brr[k];
  }
}
void mergesort(int *arr, int s, int e)
{   
    if(s<e){
    int mid=(s+e)/2;
    mergesort(arr,s, mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
    }
}
int main()
{
   int arr[] = { 15,5,24,8,1,3,16,10,20};
    mergesort(arr,0,8);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}