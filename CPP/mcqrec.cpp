#include<iostream>
using namespace std;

int func1(int a)
{
    if(a<0)
    {
        return -func1(-a);
    }
    else if(a<10)
    {
        return (a%10)+1;
    }
    else{
        return 100*func1(a/10);
    };

}

int main()
{
    int a=-234;
    int result= func1(a);
    cout<<result;
    return 0;
}