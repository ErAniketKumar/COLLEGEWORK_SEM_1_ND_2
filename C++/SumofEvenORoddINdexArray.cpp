#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the element of array\n";
    for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }
    int sumE=0,sumO=0;
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            sumE=sumE+arr[i];
        }
    }
     for(int i=0;i<size;i++)
    {
        if(i%2!=0)
        {
            sumO=sumO+arr[i];
        }
    }
    cout<<"sum of Even Index Is : "<<sumE<<endl;
    cout<<"sum of Odd index is : " <<sumO<<endl;
    cout<<"diffrenece btween sum of even and odd is "<<sumE-sumO;
    

    return 0;
}