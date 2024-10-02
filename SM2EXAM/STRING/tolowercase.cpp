#include<iostream>
using namespace std;
int main()
{
    char arr[10]="AniKET";
    int i=0;
    while(arr[i])
    {

    if(arr[i]>='A' && arr[i]<='Z')
    {
        arr[i]+=32;
     
    }
       i++;
    }
    for(int i=0;arr[i];i++)
    {
        cout<<arr[i];
    }
        return 0;
}