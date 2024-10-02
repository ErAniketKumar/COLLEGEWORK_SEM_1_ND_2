#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char arr[10]="aniket";
    int e=strlen(arr);
    
    for(int i=0;i<=e/2;i++)
    {
        swap(arr[i],arr[e-i-1]);
    }
    for(int i=0;arr[i];i++)
    {
        cout<<arr[i];
    }

    return 0;
}