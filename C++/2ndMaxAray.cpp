#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array\n";
    cin>>size;
    int arr[size];
    cout<<"enter the element of array\n";
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    int max=arr[0],max2=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=max)
        {
          max2=max;
          max=arr[i];
        }
        else if(max2<arr[i]&&arr[i]<max)
        {
            max2=arr[i];
        }
        else if(max==max2)
        {
            max2=0;
        }
    }
    cout<<"second maximum num is : "<<max2;
    return 0;
}