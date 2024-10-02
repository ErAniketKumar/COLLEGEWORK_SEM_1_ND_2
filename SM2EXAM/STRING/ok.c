#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="aniket";
    char str2[10]="ket";
    int len=strlen(str1);
    int len2=strlen(str2);
    char sub[len2+1];
    // for(int i=len-len2;i<len;i++)
    // {
    //     // sub[i]=str1[i];
 
    // }
    //  for(int i=0;i<len2;i++)
    // {
    //     printf("%c ",sub[i]);
    // }

int j=0;
    for(int i=3;i<len;i++)
    {
        sub[j++]=str1[i];
    }
    for(int i=0;sub[i];i++)
    {
        printf("%c",sub[i]);
    }

    

   

    return 0;
}