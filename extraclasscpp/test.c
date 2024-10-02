#include<stdio.h>
#include<stdlib.h>
int main()
{
       struct student {
        char rollNo[11];
        char name[100];
        float cgpa;
    };

   
    struct student *s=malloc(sizeof(struct student));
    
     

return 0;
}