#include<stdio.h>
#include<string.h>
int main()
{   
   char str[20]="aniket";
   int s=0;
   int e=strlen(str);
  for(int i=0;i<strlen(str)/2;i++)
  {
       char temp=str[strlen(str)-i-1];
       str[strlen(str)-i-1]=str[i];
       str[i]=temp;
  }
  printf("%s",str);

    return 0;
}