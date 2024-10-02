#include<iostream>
#include<vector>
using namespace std;
//shorting only zero and one consistent
///Using Array
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            c++;
        }
    }
    // for(int i=0;i<c;i++)
    // {
    //    arr[i]=0;
    // }
    // for(int i=c;i<size;i++)
    // {
    //       arr[i]=1;
    // }

    for(int i=0;i<size;i++)
    {
        if(i<c)
        {
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}