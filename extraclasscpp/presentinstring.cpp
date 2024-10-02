#include<iostream>
#include<string.h>
using namespace std;


//  ADHURA CODE HAI 
// ESKO KARNA HAI 

char* fun(char *a,char *b)
{
    int s=strlen(b);
    char c[100];

    for(int i=0,j=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            c[j++]=a[i];
        }
    }
  if(strcmp(b,c))
  {
    printf("Yes");
  }
  else{
    printf("No\n");
  }
}
int main()
{
    char a[100];
    char b[100];
    scanf("%[^\n]",a);
    scanf(" %s",b);
    printf("%s\n",fun(a,b));

    return 0;
}