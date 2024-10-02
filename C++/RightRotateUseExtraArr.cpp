#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

     
    int k,j=0;
    cin>>k;   
        k=k%size;
    int brr[size];
    for(int i=size-k;i<size;i++)//supose k=2;
    {
           brr[j++]=arr[i];/// [4,5, , , ];
    }
    for(int i=0;i<=k;i++)
    {
        brr[j++]=arr[i];     ///  [4,5,1,2,3]
    }
    for(int i=0;i<size;i++)
    {
       cout<<brr[i]<<" ";
    }
    return 0;
}