#include<iostream>
#include<vector>

using namespace std;
int main()
{

// vector<int>v;

// for(int i=0;i<5;i++)
// {
//     int element;
//     cin>>element;
//     v.push_back(element);
// }
// for(int  i=0;i<v.size();i++)
// {
//     cout<<v[i]<<" "<<endl;

// }
 
 //other mathod for taking output

int size;
cin>>size;

 vector<int>v(size);

 for(int i=0;i<v.size();i++)
 {
    cin>>v[i];
 }
 vector<int>v2(size);

 for(int i=0;i<v2.size();i++)
 {
    cin>>v2[i];
 }
int c=0,d=0;

 for(int i=0;i<size;i++)
 {
   if(v[i]>v2[i])
   {
      c++;
   }
   if(v[i]<v2[i])
   {
      d++;
   }  

 }
 cout<<" c is : "<<c<<" d is : "<<d;

 

    return 0;

}