#include<iostream>
using namespace std;
int main()
{
    ////input of output of 2d array via dma
    int r,c,t;
    cout<<"enter the value of row and column\n";
    cin>>r>>c;
    int *ptr;
    ptr=(int*)malloc(r*c*sizeof(int));
    cout<<"enter the element in array\n";
    for(int i=0;i<r*c;i++)
    {
        cin>>ptr[i];
    }
    cout<<"out of the 2d array is \n";
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