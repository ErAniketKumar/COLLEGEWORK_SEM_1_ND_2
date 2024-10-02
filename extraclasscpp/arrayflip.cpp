#include<iostream>
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
        cin>>arr[i];
       }
       int czero=0,cone=0;

  for(int i=0;i<n;i++)
  {
     if(arr[i])
     {
        cone++;
     }
     else{
        czero++;
     }
  }
cout<<(czero >1 && czero== n ? "NO\n" : cone > 1 && cone== n?"NO\n":"YES\n");

    }
    return 0;
}