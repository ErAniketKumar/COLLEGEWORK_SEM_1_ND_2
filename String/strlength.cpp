#include<iostream>
#include<string.h>
using namespace std;
int getlen(char *name)
{
    int i;
    for(i=0;name[i];i++);
    return i;

}
int main()
{
    char name[20];
    // cin>>name;
    scanf("%[^\n]",name);
    int ans=getlen(name);
    cout<<ans;
    return 0;
}