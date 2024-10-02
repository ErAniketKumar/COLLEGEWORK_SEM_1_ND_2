#include<iostream>
using namespace std;
void merge(int *arr, int lb, int mid, int ub)
{
    int i=lb,j=mid+1,k=lb;
    int brr[ub];
    while(i<=mid && j<=ub)
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
        while(j<=ub)
        {
           brr[k]=arr[j];
           j++;k++;

        }
    }
    else{
        while(i<=mid)
        {
            brr[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int k=lb;k<=ub;k++)
    {
        arr[k]=brr[k];
    }
}
void msort(int *arr, int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        msort(arr,lb,mid);
        msort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
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
    msort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}