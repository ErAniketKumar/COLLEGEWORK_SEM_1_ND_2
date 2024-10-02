#include<iostream>
using namespace std;
void Parr(int *ptr,int idx,int n)
{
    
    if(idx==n)
    {
        return;
    }
    else{
        
        Parr(ptr,idx+1,n);
    }
    
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int idx;cin>>idx;  //index
    Parr(arr,idx,n);
    return 0;
}