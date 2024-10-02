#include<iostream>
using namespace std;
void merge(int*,int ,int ,int);
void msort(int *arr, int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        msort(arr,left,mid);
        msort(arr, mid+1,right);
        merge(arr,left,mid,right);
    }
}
void merge(int *arr,int left,int mid, int right)
{
    int i,j,k;
    int s1=(mid-left)+1;
    int s2=(right-mid);
    int la[s1],ra[s2];
    for(i=0;i<s1;i++)
    {
        la[i]=arr[left+i];
    }
    for(int j=0;j<s2;j++)
    {
        ra[i]=arr[mid+1+j];
    }
    i=0;j=0,k=left;
    while(i<s1&&j<s2)
    {
        if(la[i]<=ra[j])
        {
            arr[k]=la[i];
            i++;
        }
        else{
            arr[k]=ra[j];
            j++;
        }
        k++;
    }
    while(i<s1)
    {
        arr[k]=la[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        arr[k]=ra[j];
         j++;
         k++;
    }
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
   msort(arr,0,n-1);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";

   }
    return 0;
}