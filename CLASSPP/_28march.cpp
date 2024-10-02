#include<iostream>
using namespace std;
int main()
{
    //multiplication of matrix
    int r1,c1,r2,c2;
    cout<<"enter the first row and column \n";
    cin>>r1>>c1;
     int arr[r1][c1];
 cout<<"ENTER THE ELEMENT OF FIRST MATRIX\n";
   for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>arr[i][j];
        }
    }
//second matrix input 
cout<<"enter 2nd matrix row and column\n";
    cin>>r2>>c2;
    int brr[r2][c2];
     cout<<"ENTER THE ELEMENT OF SECOND MATRIX\n";
       for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>brr[i][j];
        }
    }
    
   ///nul matrix 
    int crr[r1][c2];
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c2;j++)
        {
            crr[i][j]=0;
        }
     }
 //multiply
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
    //output 

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