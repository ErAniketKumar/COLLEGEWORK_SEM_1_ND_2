#include<iostream>
using namespace std;

int maxele(int *ptr,int idx,int n)
{

  if(n-1==idx)
  {
    return ptr[idx];
  }
  else{
    return max(ptr[idx],maxele(ptr,idx+1,n));
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
 int result=maxele(arr,0,n);
 cout<<result;

  return 0;
}