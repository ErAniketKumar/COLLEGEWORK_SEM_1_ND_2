#include<iostream>
#include<string.h>
using namespace std;
void revstring(char *name)
{
   for(int i=0;i<strlen(name)/2;i++)
   {
     int temp=name[i];
     name[i]=name[strlen(name)-i-1];
     name[strlen(name)-i-1]=temp;
   }
   cout<<name;
   
}
int main()
{
    char name[20];
    // cin>>name;
    scanf("%[^\n]",name);
    revstring(name);  
    return 0;
}