#include<iostream>
using namespace std;
int main()
{
   int r,c;
   cin>>r>>c;
   int arr[r][c];
   int brr[r][c];
   int crr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cin>>arr[i][j];
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cin>>brr[i][j];
        }
    }
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         crr[i][j]=arr[i][j]+brr[i][j];
    //     }
        
    // }
      for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}