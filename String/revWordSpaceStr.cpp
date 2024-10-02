#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void revcode(char name[], int s,int e){
while(s<e)
{
    char temp;
    while(s<e)
    {
        temp=name[s];
        name[s]=name[e];
        name[e]=temp;
        s++;
        e--;
    }
}   
}
void revstrg(char *name)
{
    int s=0,e=0;
    int i=0;
    while(name[i])
    {
        for(e=s;name[e] && name[e]!=' ';e++);
        revcode(name,s,e-1);
        s=e+1;
        i++;
    }
   cout<<name; 
   
}
int main()
{
    char name[100];
    scanf("%[^\n]",name);
    char demo[100];
    revstrg(name);

   
   
    return 0;
}