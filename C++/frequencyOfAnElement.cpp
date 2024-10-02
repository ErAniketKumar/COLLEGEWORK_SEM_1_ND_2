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
int frequency=0;

   for(int i=0;i<size;i++)
   {
       if(v[i]==x){
        frequency++;
    }
   }
   cout<<"frequency of x is : "<<frequency;
   return 0;
}
   