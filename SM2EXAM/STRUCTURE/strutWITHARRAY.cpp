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
    int n;
    printf("enter number of students\n");
    scanf("%d",&n);
    struct details s[n];
    int j=1;
    for(int i=0;i<3;i++)
    {
        printf("enter %d student\n",j++);
        scanf("%s %d %d",s[i].name,&s[i].age,&s[i].salary);
    }
    int k=1;
        for(int i=0;i<3;i++)
    {   
        printf("%d student => ",k++);
        printf("%s %d %d\n",s[i].name,s[i].age,s[i].salary);        
    }

    return 0;
 }