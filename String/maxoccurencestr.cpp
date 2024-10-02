#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

char maxacr(char *str)
{
    int arr[26]={0};
   for(int i=0;i<strlen(str);i++)
   {
     char ch=str[i];
     int number=0;
     if(ch>='a' && ch<='z')
     {
        number=ch-'a';
        arr[number]++;
     }
     else{
    number=ch-'A';
    arr[number]++;
     }
     
   }
   int maxidx=-1;
   int  ans=0;
   for(int i=0;i<26;i++)
   {
    if(maxidx<arr[i])
    {
        ans=i;
        maxidx=arr[i];
    }
    cout<<arr[i]<<" ";
   }
   char fans='a'+ans;
   return fans;   
}
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    // cout<<
    maxacr(str);
    
    return 0;
}