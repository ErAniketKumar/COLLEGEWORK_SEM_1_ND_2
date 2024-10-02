#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //structure input and output by user 
    
    struct student {
    char rollNo[11];
    char name[100];
    float cgpa;
    };
    struct student x,y;
    strcpy(x.rollNo,"2211981054");
    strcpy(x.name,"Aniket");
    x.cgpa=9.25;
    cout<<"Roll No is:"<<x.rollNo<<"\nNmae is: "<<x.name<<"\nCGPA is:  "<<x.cgpa<<endl;
  cin>>y.rollNo;
  cin>> y.name;
  cin>>y.cgpa;

    // scanf("%s",y.rollNo);
    // scanf(" %[^\n]",y.name);
    // scanf("%f",&y.cgpa);
// printf("%s %s %f\n",y.rollNo,y.name,y.cgpa);

    cout<<"Roll No is:"<<y.rollNo<<"\nNmae is: "<<y.name<<"\nCGPA is:  "<<y.cgpa<<endl;






    return 0;
}