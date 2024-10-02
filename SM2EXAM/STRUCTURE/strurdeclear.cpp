#include<iostream>
#include<string.h>
using namespace std;
struct details
{
    char name[10];
    int age;
    int salary;
    
};

 int main()
 {
    struct details emp,stud;
    printf("ENTER EMP DETAILS\n"); 
    scanf("%s %d %d",emp.name,&emp.age,&emp.salary);
    printf("EMP DETAILS\n");
    printf("%s  %d  %d\n",emp.name,emp.age,emp.salary);
    printf("ENTER STUDENTS DETAILS\n");
    scanf("%s %d %d",stud.name,&stud.age,&stud.salary);
    printf("STUDENTS DETAILS\n");
    printf("%s %d  %d",stud.name,stud.age,stud.salary);

    return 0;
 }