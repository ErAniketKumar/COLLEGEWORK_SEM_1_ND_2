#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int *ptr;
    ptr=(int*)malloc((r*c)*sizeof(int));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ptr[i*c+j];
        }
    }
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<ptr[i*c+j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}