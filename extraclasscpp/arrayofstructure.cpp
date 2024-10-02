#include<iostream>
using namespace std;
int main()
{
        struct student {
        char rollNo[11];
        char name[100];
        float cgpa;
    };
    int n;
    cout<<"enter the num of data\n";
    cin>>n;
    struct student s[n];

    cout<<"Enter ROLL\n Name\n cgpa  \n";


    for(int i=0;i<n;i++)
    {  
        scanf("%s",s[i].rollNo);
       
        scanf(" %[^\n]",s[i].name);
       
        scanf("%f",&s[i].cgpa);
    }
    for(int i=0;i<n;i++)
    {
        printf(" Roll Number Is : %s\n",s[i].rollNo);
        printf("Name is : %s\n",s[i].name);
        printf(" CGPA IS :%f\n",s[i].cgpa);

    }

    return 0;
}