#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,7};
bool shorted=true;
for(int i=1;i<6;i++)
{
if(arr[i]<=arr[i-1])
{
    shorted=false;
}

}
cout<<shorted;



    return 0;
}