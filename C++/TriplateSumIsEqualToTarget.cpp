#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"enter the size of array"<<endl;
cin>>size;
int arr[size];
cout<<"enter the element of array"<<endl;
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
int T;
cout<<"enter the value of target  : "<<endl;
cin>>T;
for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
       for(int k=j+1;k<size;k++)
       {
         if(arr[i]+arr[j]+arr[k]==T)
        {
            cout<<"index is ("<<i <<" "<<j<<" "<<k<<") value is : "<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<" = "<<T<<endl;

        }
       }
    }
}
    return 0;
}