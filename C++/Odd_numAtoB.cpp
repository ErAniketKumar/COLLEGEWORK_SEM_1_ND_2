#include<iostream>
using namespace std;


bool oddnum(int x){
    if(x%2!=0)
    {
        return true;
    }
    else{
        return false;

    }
}
int main()
{
    int a,b;
    cin>>a>>b;
        
for(int i=a;i<=b;i++)
{
    if(oddnum(i))
    {
        cout<<i<<" ";

    }
}

}