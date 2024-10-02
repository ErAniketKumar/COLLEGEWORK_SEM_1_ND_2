#include<iostream>
using namespace std;
#include<math.h>
bool isprime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
            return true;
   

}
int main()
{
   
 for(int i=2;i<=20;i++)
 {
    if(isprime(i))
    {
        cout<<i<<" ";

    }
 }
    return 0;
}