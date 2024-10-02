#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char arr[]={'1','2','3','4','5','6','7','\0'};
    // for(int i=0,j=strlen(arr)-1;i<j;i++,j--)
    // {
    //     char temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    // }

int s = strlen(arr);
 for(int i=0;i<strlen(arr)/2;i++)
    {
        //  char temp=arr[i];
        //  arr[i]=arr[strlen(arr)-1-i];
        //  arr[strlen(arr)-1-i]=temp;

        arr[s - 1 - i] = arr[i] ^ arr[s - 1 - i] ^ (arr[i] = arr[s - 1 - i]);
    }
   

    for(int i=0;i<strlen(arr);i++)
    {
        cout<<arr[i]<<" ";
    }

   

    return 0;
}