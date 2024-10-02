#include <iostream>
#include<math.h>
using namespace std;

int main() {
int s,t;
scanf("%d %d",&s,&t);
int a,b;
scanf("%d %d",&a,&b);
int m,n;
scanf("%d %d",&m,&n);
int arr[m];
int brr[n];
for(int i=0;i<m;i++)cin>>arr[i];
for(int i=0;i<n;i++)cin>>brr[i];
for(int i=0;i<m;i++)
{
    arr[i]=arr[i]+a;
}
for(int i=0;i<n;i++)
{
    brr[i]=brr[i]+b;
}
int c=0,d=0;
for(int i=0;i<m;i++)
{
    if(arr[i]>=s && arr[i]<=t)
    {
        c++;
    }
}
for(int i=0;i<n;i++)
{
    if(brr[i]>=s && brr[i]<=t)
    {
        d++;
    }
}
cout<<c<<" "<<d;


    return 0;
}


