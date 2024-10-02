#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char ch[20]="abcdef";
    int f=0,l=strlen(ch)-1;

    while(f<l)
    {
        swap(ch[f++],ch[l--]);
    }
    printf("%s",ch);

    return 0;
}