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
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
        for(int i=0;i<r;i++)
        {
           int s=0,e=c-1;
           while(s<e)
           {
            swap(arr[i][e],arr[i][s]);
            s++;
            e--;

           }
        }
       for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}