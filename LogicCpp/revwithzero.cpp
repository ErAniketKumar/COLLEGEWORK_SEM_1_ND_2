#include<iostream>
using namespace std;
int main()
{
    //digit rev with 0 eg:- in 123. ot 321 but in 1200,  0021

    int n,rev=0,r,count=0,lock=1;
    cin>>n;
   while(n!=0)
   {
    r=n%10;
    if(r==0 &&lock)
    {
        count++;
    }
    else{
     lock=0;
    }
    rev=rev*10+r;
    n/=10;

   }
   while(count--)
   {
    cout<<"0";
   }
   cout<<rev;

    return 0;
}