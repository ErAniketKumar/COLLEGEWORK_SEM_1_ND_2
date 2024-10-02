#include<stdio.h>
struct cricketer{
    char name[10];
    int age;
    int noOFmatch;
    int avgrun;
};
int main()
{
    int n;
    printf("enter number of cricketer\n");
    scanf("%d",&n);

struct cricketer cr[n]; //// 20 cricketer ka record ban gaya
for(int i=0;i<2;i++)
{
    scanf("%s %d %d %d",cr[i].name,&cr[i].age,&cr[i].noOFmatch,&cr[i].avgrun);
    
}
for(int i=0;i<2;i++)
{
    printf("%s %d %d %d",cr[i].name,cr[i].age,cr[i].noOFmatch,cr[i].avgrun);

}
}