#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct date{
    int day;
    int month;
    int year;

}date;
int main()
{
    date a,b;
    a.day=5;
    a.month=3;
    a.year=2009;
    b.day=8;
    b.month=6;
    b.year=2009;
    bool flag =true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;
    if(flag==true)
    {
        printf("Date are same\n");
    }
    else{
        printf("DIFFRENT\n");

    }
}
