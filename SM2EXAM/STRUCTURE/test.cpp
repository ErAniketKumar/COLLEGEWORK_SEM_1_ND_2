#include<iostream>
#include<string.h>
using namespace std;
struct details
{
    char name[20];
    int age;
    int salary;    
};

 int main()
 {
    struct details s[3];
    int j=1;
    for(int i=0;i<3;i++)
    {
        printf("enter %d student\n",j++);
        scanf("%s %d %d",s[i].name,&s[i].age,&s[i].salary);
    }
printf("%d add of 1 \n",&s[0].name);
printf("%d add of 2\n ",&s[0].age);
printf("%d add of 3\n ",&s[0].salary);


    return 0;
 }