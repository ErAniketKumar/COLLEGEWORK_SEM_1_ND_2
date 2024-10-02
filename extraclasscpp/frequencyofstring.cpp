#include<iostream>
using namespace std;
void fun(char *arr,int n)
{
    char r[n];
    int i,j;
    int brr[n];
    int c=1;
    for(i=0,j=0;arr[i]!='\0';i++)
    {
        if(arr[i]==arr[i+1]){
            c++;
            continue;
        }
        brr[j++]=c;
        c=1;
    }

    for(int i=0;i<j;i++)
    {
        cout<<brr[i]<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    char arr[n];
    scanf("%s",&arr);
    fun(arr,n);
    return 0;
}