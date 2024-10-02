#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
int *ptr,size;
cin>>size;
ptr=(int*)malloc(size*sizeof(int));
for(int i=0;i<size;i++)
{
    cin>>ptr[i];

}
for(int i=0;i<size/2;i++)
{
    int temp=*(ptr+i);
    *(ptr+i)=*(ptr+size-1-i);
    *(ptr+size-1-i)=temp;
}
for(int i=0;i<size;i++)
{
    cout<<*(ptr+i)<<" ";

}
free(ptr);


    return 0;
}