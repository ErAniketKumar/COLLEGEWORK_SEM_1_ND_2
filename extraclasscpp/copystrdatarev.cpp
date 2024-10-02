#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
   char arr[10];
   char brr[10];
   scanf("%s",&arr);

   int n=strlen(arr),i,j;
   for(i=n,j=0;i>=0;i--,j++)
   {
    brr[j]=arr[i];
   }
   brr[j]='\0';
   for(int i=0;i<=n;i++)
   {
    printf("%c",brr[i]);
   }

    return 0;
}