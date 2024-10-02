#include<iostream>
using namespace std;

int quickshort(int *arr,int lb,int up)
{
    if(lb<up)
    {
        int loc=partition(arr,lb,up);
        quickshort(arr,lb,loc-1);
        quickshort(arr,loc+1,up);

    }
}
int partition(int *arr,int lb,int up)
{
    int start=lb;
    int end=up;
    int pivot=arr[lb];
    while(pivot>arr[start])
{
    start++;
}
   

}


int main()
{
    int n; cin>>n;
    int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  quickshort(arr,0,n);

    return 0;
}