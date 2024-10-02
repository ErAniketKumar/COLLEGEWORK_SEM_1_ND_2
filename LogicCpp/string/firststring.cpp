#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char ch[50];
    scanf("%[^\n]",&ch);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]==' ')
        {
           printf("\n");
        }
        else{
             printf("%c",ch[i]);
        }
    }


    return 0;
}