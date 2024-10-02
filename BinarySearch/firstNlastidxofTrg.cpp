#include<iostream>
using namespace std;
int faccurency(int *arr, int t,int s,int e)
{
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==t)
        {
            ans=mid;
            e=mid-1;

        }
        else if(arr[mid]<t)
        {
            s=mid+1;
        }
        else{

            e=mid-1;
        }
    }
    return ans;
}
int laccurency(int *arr,int t,int s,int e)
{
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==t)
        {
            ans=mid;
            s=mid+1;

        }
        else if(arr[mid]<t)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main()
{
int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
   cin>>arr[i];
}
int t;cin>>t;

int fele= faccurency(arr,t,0,n-1);
int lele=laccurency(arr,t,0,n-1);
cout<<fele<<"-"<<lele;


    return 0;
}