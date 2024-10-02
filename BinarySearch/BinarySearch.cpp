#include<iostream>
using namespace std;
int bsearch(int *arr, int t,int s,int e)
{
   while(s<=e)
   {
   int mid=(s+e)/2;
   if(arr[mid]==t) return mid;
   else if(arr[mid]<t)
   {
      s=mid+1;
   }
   else{
      e=mid-1;

   }
   }
   return -1;
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

int res= bsearch(arr,t,0,n-1);
cout<<res;

    return 0;
}