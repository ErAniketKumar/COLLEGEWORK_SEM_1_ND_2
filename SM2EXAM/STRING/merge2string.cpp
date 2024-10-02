#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[40]="Hello";
    char str2[10]="Duniya";
    int s1=strlen(str1);
    int s2=strlen(str2);
    for(int i=0;i<=s2;i++)
    {
        str1[s1+i]=str2[i];
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        cout<<str1[i];
    }
    return 0;
}