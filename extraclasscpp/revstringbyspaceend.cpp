#include<iostream>
using namespace std;
void fun(char *arr)
{
    for(int i=0;i<arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            continue;
        }
    }
}
int main()
{
    char arr[100];
    cin>>arr;
    fun(arr);
    return 0;
}