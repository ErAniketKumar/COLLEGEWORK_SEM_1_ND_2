#include<iostream>
using namespace std;
int sumofdigit(int n)
{
    int i=0;
   if(0<=n and n<=9)
   {
    return n;
   }
   else{
       
        return n%10+sumofdigit(n/10);
         
   }
}
int main()
{
  int n; cin>>n;
  int sumofd=sumofdigit(n);
  cout<<sumofd;

    return 0;
}
