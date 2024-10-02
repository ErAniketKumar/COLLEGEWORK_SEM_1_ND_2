#include<iostream>
using namespace std;
int main()
{
    int *arr[3];
    for(int i=0;i<3;i++)
    {
        arr[i] = (int *)malloc(3*sizeof(int));
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(arr+i)+j);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(arr+i)+j);
        }
    }
    



    return 0;
}