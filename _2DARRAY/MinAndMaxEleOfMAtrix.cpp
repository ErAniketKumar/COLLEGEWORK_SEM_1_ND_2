#include<iostream>
using namespace std;
int main()
{
     int r,c;
   cin>>r>>c;
   int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cin>>arr[i][j];
        }
    }
    int max=arr[0][0],min=arr[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(max<=arr[i][j]){
            max=arr[i][j];
           }
           if(min>=arr[i][j])
           {
            min=arr[i][j];
           }
        }
    }
    cout<<"maximum element of the given matrix is : "<<max<<"\nminimum element of the given matrix is : "<<min;
    
    return 0;
}