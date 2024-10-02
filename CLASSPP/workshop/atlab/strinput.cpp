#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char arr[50];
    scanf("%s",arr);
    cout<<"print entered value\n";
    printf("%s\n",arr);
cout<<"via loop\n";
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    cout<<"reverse order loop\n";

    while(i>=0)
    {
        printf("%c",arr[i]);
        i--;
    }
cout<<"\n\n";
    char brr[]="ANIKET";
    int j=0;
    while(brr[j]!='\0')
    {
        printf("%c %p %d\n",brr[j],&brr[j],&brr[j]);
       j++;
    }


    return 0;
}