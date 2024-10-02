#include<iostream>
using namespace std;
// int Apowb(int x,int y)
// {
//   if(y==0)
//   {
//     return 1;
//   }
//   else{
//     return x*Apowb(x,y-1);
//   }
// }


//log n time complexcity///
int Apowb(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else if(y%2==0)
    {
        int result=Apowb(x,y/2);
        return result*result;
    }
    else{
        int result=Apowb(x,(y-1)/2);
        return x*result*result;
    }
}

int main()
{
    int x,y;
    cin>>x>>y;
    int result=Apowb(x,y);
    cout<<result;
    return 0;
}