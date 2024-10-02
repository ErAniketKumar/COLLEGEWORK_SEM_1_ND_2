#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cin>>r>>c;
    int *a[r];
    for(j=0;j<c;j++)
    {
        a[i]=(int*)malloc(sizeof(int)*c);
    }
    //input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //print
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
for(i=0;i<r;i++)
{
    free(a[i]);
}
    return 0;
}