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
    int sum[r];
     for(int i=0;i<r;i++)
        {
         sum[i]=0;
        for(int j=0;j<c;j++)
        {
           sum[i]=sum[i]+arr[i][j];
        }
    }
        
    int max=sum[0];
    int row=0;
    for(int i=0;i<r;i++)
    {
       if(max<sum[i]){
        max=sum[i];
        row=i;
       }
    }
    cout<<row;

    return 0;
}