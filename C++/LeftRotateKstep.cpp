#include<iostream>
using namespace std;
int main()
{
    int size,r=2;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    while(r--)
    {
        int temp=arr[0];
        for(int i=0;i<6;i++)
        {
            arr[i]=arr[i+1];
            
        }
        arr[size-1]=temp;

    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];

    }
    return 0;
}