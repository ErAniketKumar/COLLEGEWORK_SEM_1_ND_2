#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    int sum=0;
    while(t--)
    {
        int n,rev=0,temp,r;
        cin>>n;
        temp=n;
        while(n!=0)
        {
           r=n%10;
           rev=rev*10+r;
           n/=10;
        }
        int temp2=rev;
        if(temp2==temp)
        {
            int rr;
            while(temp2!=0)
            {
                rr=temp2%10;
                sum=sum+rr;
                temp2/=10;
            }
        }
        else{
             cout<<rev<<endl;   
        }

    }
    cout<<"sum of all palidrom is : "<<sum;

    return 0;
}