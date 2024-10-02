#include<stdio.h>
typedef int* pointer;
int main()
{
//    int x,y; ////normal two integer variable created
//    int *a,*b;
//    int p=5,q=10;        problem because we can not put and declear this type via pointer

//    *a=&p;
//    *b=&q;
//    printf("%d %d  ",a,b);
 //// or
//  int* a=&p,b=&q; also this is not allowed

//so now after use typedef

//after using typedef we can do 
int x=2,y=9;
pointer a=&x,b=&y;
printf("%d %d",a,b);




    return 0;
}