#include<iostream>
using namespace std;
//write of a program contains of an array after each path 

void myshort(int *arr,int n)
{
   
    for(int i=0;i<n-1;i++)
    {
     for(int j=0;j<n-i-1;j++)
     {
        int temp=arr[j];
        if(arr[j]>arr[j+1])
        {
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
     cout<<"pass "<<i+1<<" is :--> ";
     for(int j=0;j<n-1-i;j++)
     {
       cout<<arr[j]<<" ";
     }
     cout<<endl;
    }
}
void mydisplay(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    myshort(arr,n);
    mydisplay(arr,n);
    return 0;
}