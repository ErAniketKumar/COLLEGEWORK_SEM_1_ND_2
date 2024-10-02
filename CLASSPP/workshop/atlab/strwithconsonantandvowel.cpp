#include<iostream>
using namespace std;
int main()
{
    char arr[50];
    int i=0,v=0,c=0;
    scanf("%[^\n]",arr);
    while(arr[i]!='\0')
    {
        if(arr[i]>='A' and arr[i]<='z')   //skep num or space means only check alphabetival

        if(arr[i]=='A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'
        ||arr[i]=='i'||arr[i]=='O'|| arr[i]=='o'||arr[i]=='U'||arr[i]=='o')
        {
            v++;
        }
        else{
            c++;
        }
        i++;
    }
    printf("%VoWEL=%d\n",v);
    printf("CONSONANT=%d\n",c);
    printf("%s\n",arr);

    return 0;
}