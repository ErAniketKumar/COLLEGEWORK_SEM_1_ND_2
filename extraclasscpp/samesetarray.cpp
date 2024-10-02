#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
     if(n%2!=0)
     {
        cout<<"no\n";
     }
      else{
        sort(arr,arr+n);

        int c=0;
        for(int i=0;i<n;i+=2)
        {
            if(arr[i]==arr[i+1])
            {
                c++;
            }
           
        }
         cout<<c;

        
      
      }
    }
    return 0;
}