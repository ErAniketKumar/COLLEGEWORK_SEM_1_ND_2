#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int ind1,ind2;
  cin>>ind1>>ind2;
  int sum=0,s1,s2;
  for(int i=0;i<n;i++)
  {
     if(i==ind1)
     {
        s1=arr[i];
     }
     if(i==ind2)
     {
        s2=arr[i];
     }

  }
  sum=s1+s2;
  cout<<sum;
  
    return 0;
}