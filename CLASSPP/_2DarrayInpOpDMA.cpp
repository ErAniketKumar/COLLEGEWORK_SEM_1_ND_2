#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"row and column\n";
    cin>>r>>c;
int *ptr;
ptr=(int*)malloc((r*c)*sizeof(int));
cout<<"enter the element in 2d array / matrix \n";
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cin>>ptr[i*c+j];
    }
}
cout<<"out of entered element is / matrix is :\n";
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