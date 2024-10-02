#include<iostream>
using namespace std;

void ssort(int arr[],int n)
{
    int mini,i,j;
    for(int i=0;i<n-1;i++)
    {
        mini=i;
        for(int j=i;j<n;j++)
        {
            if(arr[mini]>arr[j]) mini=j;
        }
        if(i!=mini)
        {
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
        }
    }

}


int main()
{
int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
ssort(arr, n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}