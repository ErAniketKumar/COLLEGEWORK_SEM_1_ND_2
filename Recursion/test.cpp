#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
     int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int brr[n];
     for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    int s=0,e=n-1;
    while(s<e)
    {
          swap(arr[s++],arr[e--]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==brr[i])
        {
            flag++;
        }
    }
    if(flag==n)
     {
        cout<<"YES ARRAY IS PALIDROM\n";
     }
    else{
        cout<<"BADLUCK NOT PALIDROM\n";
    }
    return 0;
}