#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cin>>r1>>c1;
    int arr[r1][c1];
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c1;j++)
        {
            cin>>arr[i][j];
        }
     }
     int r2,c2;
     cin>>r2>>c2;
     int brr[r2][c2];
     for(int i=0;i<r2;i++)
     {
        for(int j=0;j<c2;j++)
        {
            cin>>brr[i][j];
        }
     }
     int crr[r1][c2];

     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c2;j++)
        {
            crr[i][j]=0;
        }
     }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
          for(int k=0;k<c1;k++)
          {
            crr[i][j]=crr[i][j]+(arr[i][k]*brr[k][j]);
          }
        }
    }
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c2;j++)
        {
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}
