#include<iostream>
using namespace std;
int f(int *arr,int n)
{
    bool flag;
    int c=0;
    for(int i=0;i<n;i++)
    {
        flag=true;
        int j;
        for(j=2;j<arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {

            flag=false;
            break;
            }
        }

    if(flag)
        c++;
    }
        return c;
}
void acpt(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int n;cin>>n;
    int arr[n];
    acpt(arr,n);
    int ans=f(arr,n);
    cout<<ans;
    
    return 0;
}