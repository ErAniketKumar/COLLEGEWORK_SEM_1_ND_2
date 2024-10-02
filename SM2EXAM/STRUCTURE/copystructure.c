#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int age;
    int wt;
    float hight;

}ani,abhi;

int main()
{
  strcpy(ani.name,"ANIKET");
  ani.age=20;
  ani.wt=55;
  ani.hight=5.5;
  printf("%s\n",ani.name);
  printf("%d\n",ani.age);
  printf("%d\n",ani.wt);
  printf("%f\n",ani.hight);

  abhi=ani; // eska matlab ani ka sara chij abhi me copy ho gaya hai both are same
  

  printf("%d",abhi.age);



}