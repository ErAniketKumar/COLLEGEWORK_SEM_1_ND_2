#include<iostream>
#include<vector>
using namespace std;
int main()
{
int *ptr;
int n;
cout<<"enter the size of array\n";
cin>>n;
ptr=(int*)malloc(n*sizeof(int));
cout<<"enter the element of array\n";
for(int i=0;i<n;i++)
{
    ptr[i]=i;
}
// for(int i=0;i<n;i++)
// {
//     cout<<"index is : "<<i<<" value is : "<<ptr[i]<<" "<<endl;
// }
free(ptr);

for(int i=0;i<n;i++)
{
    cout<<"index is : "<<i<<" value is : "<<ptr[i]<<" "<<endl;
}

    return 0;
}