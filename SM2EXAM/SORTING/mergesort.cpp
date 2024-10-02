#include<iostream>
using namespace std;
void merge(int *arr, int s, int mid, int e)
{
    int i=s,j=mid+1,k=s;
    int brr[e];//duplicate array
    while(i<=mid && j<=e) //condition
    {
        if(arr[i]<=arr[j])
        {
            brr[k]=arr[i]; //puting small ele first
            i++;
        }
        else{
            brr[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid) //after finishing any one side put all remender ele in duplicate (extra) array
    {
        while(j<=e)
        {
            brr[k]=arr[j];
            j++; k++;
        }
    }
    else{
        while(i<=mid)
        {
            brr[k]=arr[i];
            i++;k++;
        }
    }
    // copy dublicate array(sorted) to orignal array
    for(int i=s;i<=e;i++)
    {
        arr[i]=brr[i];
    }

}
void mergesort(int *arr, int s, int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        //devide array till than single  ele
        mergesort(arr,s,mid);
        mergesort(arr, mid+1,e);
        //merge // concatinate array with sorting
        merge(arr,s,mid,e);
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
    mergesort(arr,0,n-1);
    //print sorting array;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}