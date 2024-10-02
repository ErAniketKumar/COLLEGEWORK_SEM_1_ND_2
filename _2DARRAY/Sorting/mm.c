#include<stdio.h>

void func(int a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            if(a[i][j] > a[i][j+1])
                a[i][j] = a[i][j+1];
}

int main()
{
    int m[3][3] = {1,2,3,4,5,6,7,8,9};
    int a,b;
    func(m);
    for(a=0; a<3; a++)
        printf("%d", m[0][a]);
        
    return 0;
}