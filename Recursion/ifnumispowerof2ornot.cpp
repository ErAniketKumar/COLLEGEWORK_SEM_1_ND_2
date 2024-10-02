#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=n;
        int c=0;
        if(n==1 || n==2)
        {
            cout<<"YES\n";
        }
        else{
        while(m>=2)
        {
             m/=2;
             c++;
        }
        int t=pow(2,c);
        // cout<<t<<endl;
        if(t==n)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"No\n";
        }
    }
    }
    

    return 0;
}