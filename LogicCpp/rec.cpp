#include<iostream>
using namespace std;
// void f2(int n);
// void f1(int n);
// void f1(int n)
// {
//     if(n<=10){
//     printf("%d",n+1);
//     n++;
//       f2(n);
//     }
// }

// void f2(int n)
// {
//     if(n<=10)
//     {
//         printf("%d",n-1);
//         n++;
//         f1(n);
//     }
// }


// int main()
// {
//     f1(1);
//     return 0;
// }



void f(int n){
    if(n>0)
    {
        f(n-1);
        printf("%d",n);
    }
}
main()
{
    f(3);
    return 0;
}