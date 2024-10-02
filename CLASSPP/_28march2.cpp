#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter the size of row and column\n";
      cin>>r>>c;
     int arr[r][c];
     int trr[r][c]={0};
     cout<<"enter the element of matrix\n";
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
           trr[i][j]=arr[j][i];
        }
    }

 
    //output 
    cout<<"transpose matrix is \n";
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
           cout<<trr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}