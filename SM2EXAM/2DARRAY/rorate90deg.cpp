#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int brr[n][n];
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           brr[i][j]=0;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           brr[j][n-1-i]=arr[i][j];
        }
    }
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

        return 0;
}