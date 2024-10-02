#include<iostream>
using namespace std;
int binarysearch(int arr[],int low,int high ,int key){
    int mid = (low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        return binarysearch(arr,mid+1,high,key);
    }
    else{
       return binarysearch(arr,low,mid-1,key);
    }
    if(low>high)
    {
        return -1;
    }
}
int main()
{
    int n;
    cout<<"enter the size of array\n"; 
    cin>>n;
    int arr[n];
    cout<<"insert the value in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int key; 
    cout<<"enter the key\n";
    cin>>key;
    int index=binarysearch(arr,low,high,key);
     cout<<"index is :"<<index<<"\nposition is : "<<index+1;
    return 0;
}