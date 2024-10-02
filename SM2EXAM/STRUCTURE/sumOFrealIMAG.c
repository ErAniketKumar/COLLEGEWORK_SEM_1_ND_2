#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct real
    {
        float real;
        float img;

    }real;
    real c1,c2,c3;
    scanf("%f %f",&c1.real,&c1.img);
    scanf("%f %f",&c2.real,&c2.img);
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    printf("sum: %.2f %.2fi",c3.real,c3.img);

   
    return 0;
}