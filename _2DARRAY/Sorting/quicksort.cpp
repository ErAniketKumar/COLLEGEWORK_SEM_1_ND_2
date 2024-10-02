#include<iostream>
using namespace std;
int partition(int *arr, int s,int e)
{
  //pivot nikalo
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
   //place pvoid at right pos
   swap(arr[pivotidx],arr[s]);
   // left and right part sambhal lo
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
void quickSort(int *arr,int s, int e)
{
    //base case
  if(s>=e)
  {
    return;
  }
  //partiation
  int p=partition(arr,s,e);
  //left part short kro
  quickSort(arr,s,p-1);
  //right sort kro
  quickSort(arr,p+1,e);

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
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}