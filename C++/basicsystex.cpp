#include<iostream>
using namespace std;
int main()
{
    int r=3,c=2;

    int arr[r][c]={{1,2},{3,4},{5,6}};
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //       cin>>arr[i][j];
    //     }
    // }
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
