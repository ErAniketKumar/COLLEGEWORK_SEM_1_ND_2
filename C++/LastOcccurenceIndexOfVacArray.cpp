#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
cout<<"enter the size of array"<<endl;
cin>>size;
vector<int>v(size);
cout<<"enter the element of array"<<endl;
for(int i=0;i<size;i++)
{
    cin>>v[i];
}
int x;
cout<<"enter the value of x\n";
cin>>x;
int occerence=-1;

//    for(int i=0;i<size;i++)
//    {
//        if(v[i]==x){
//         occerence=i;
//     }
//    }
//    cout<<"the value of occerence /index is: "<<occerence;
   

for(int i=size-1;i>=0;i--)
///yyaha pe hum last se loon chalayenge toh jld element mil jayega
{
 
    if(v[i]==x){
        occerence=i;
        break;
    }
}
cout<<"the value of occerence /index is: "<<occerence;
   

    return 0;
}