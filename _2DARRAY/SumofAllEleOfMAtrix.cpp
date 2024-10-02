#include<iostream>
using namespace std;
int main()
{
     int r,c;
   cin>>r>>c;
   int arr[r][c];
   int sum=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cin>>arr[i][j];
        }
    }
    // int max=arr[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           sum=sum+arr[i][j];
        }
    }
    cout<<"sum of all element in given matrix is : "<<sum;
    
    return 0;
}