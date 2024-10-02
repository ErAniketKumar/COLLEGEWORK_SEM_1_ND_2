#include<iostream>
using namespace std;
void oparr(int *arr, int n)
{
    int key=arr[0];
    int c=0,i=0;
for(int i=1;i<n;i++)
{
    if(arr[i]==key)
    {
        c++;
    }
 

}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n; cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
        cin>>arr[n];
       }
     oparr(arr,n);
    }
    return 0;
}