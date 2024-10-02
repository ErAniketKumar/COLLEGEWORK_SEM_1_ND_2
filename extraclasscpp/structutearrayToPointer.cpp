#include<iostream>
using namespace std;
int main()
{
        struct student {
        char rollNo[11];
        char name[100];
        float cgpa;
    };
   
    struct student s1,*s2;

    s2=&s1;

       scanf("%s",s2->rollNo);
       
        scanf("%s",s2->name);
       
        scanf("%f",s2->cgpa);
    
        printf(" Roll Number Is : %s\n",s1.rollNo);
        printf("Name is : %s\n",s1.name);
        printf(" CGPA IS :%f\n",s1.cgpa);
        
    return 0;
}


//pointer
//        struct student {
//         char rollNo[11];
//         char name[100];
//         float cgpa;
//     };
   
//     struct student s1,*s2;

//     s2=&s1;


//   scanf("%s",s2->rollNo);
       
//         scanf(" %s",s2->name);
       
//         scanf("%f",s2->cgpa);
    
    
//         printf(" Roll Number Is : %s\n",s2->rollNo);
//         printf("Name is : %s\n",s2->name);
//         printf(" CGPA IS :%f\n",s2->cgpa);



//value access normal

//         struct student {
//         char rollNo[11];
//         char name[100];
//         float cgpa;
//     };
   
//     struct student s1,*s2;

//     s2=&s1;


//   scanf("%s",s1.rollNo);
       
//         scanf(" %[^\n]",s1->name);
       
//         scanf("%f",&s1->cgpa);
    
    
//         printf(" Roll Number Is : %s\n",s1->rollNo);
//         printf("Name is : %s\n",s1->.name);
//         printf(" CGPA IS :%f\n",s1->cgpa);