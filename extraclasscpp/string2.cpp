#include<iostream>
using namespace std;
void fun(char *arr, char s)
{
    int i;
    for(int i=0;arr[i]!='\0';i++)
    {
        switch(arr[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':arr[i]=s;
        }
    }
}
int main()
{
    char arr[100];
    char s;
    cin>>s;
    scanf("%s",&arr);
    scanf(" %c",&s);
    fun(arr,s);
    printf("%s\n",arr);

    return 0;
}