#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};

// cout<<sizeof(arr)<<endl; //size of array
// cout<<sizeof(arr)/sizeof(arr[0])<<endl; ////length of array

for(int et:arr)
{
    cout<<et<<endl;

}
cout<<"via for loop";

for(int i=0;i<5;i++)
{
    cout<<arr[i]<<endl;

}

    return 0;
}