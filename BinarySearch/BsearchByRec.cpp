#include<iostream>
using namespace std;
int bsearch(int *arr, int t,int s,int e)
{
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==t)
    {
        return mid;
    }
    else if(arr[mid]>t)
    {
        return bsearch(arr,t,s,mid-1);
    }
    else{
        return bsearch(arr,t,mid+1,e);
    }
}
int main()
{
    cout<<"ENTER THE SIZE OF ARRAY\n";
    int n; cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY MUST BE SORTED\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER THE TARGET ELEMENT YOU WANT TO FIND \n";
    int t; 
    cin>>t;
    int index = bsearch(arr,t,0,n-1);
    cout<<"Target Element is ("<<t<<") on index -- "<<"("<<index<<")";



    return 0;
}