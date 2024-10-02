#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
cout<<"enter the element in vector"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    cout<<"enter insertion element"<<endl;
    int n;
    cin>>n;
    cout<<"enter postion"<<endl;
    int pos;
    cin>>pos;
   
    v.insert(v.begin()+pos,n);

 cout<<"after insertion"<<endl;
for(int i=0;i<6;i++)
{
    cout<<v[i]<<" ";
}
    return 0;
}