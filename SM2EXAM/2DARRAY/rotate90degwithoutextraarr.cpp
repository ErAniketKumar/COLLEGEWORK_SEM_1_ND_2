#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>arr[i][j];
        }
    }
    //transpose 
  for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    //only each row reverse
for(int k=0;k<n;k++)
{
    int s=0,e=n-1;
   while(s<=e)
   {
    swap(arr[k][s],arr[k][e]);
    s++;e--;
    
   }
}
//print
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}