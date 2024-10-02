#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int size;
    // cin>>size;

 vector<int>v(5);
 for(int i=0;i<5;i++)
 {
    cin>>v[i];
 }
 int k=3;
//  cin>>k;
//  k=k%v.size();
 reverse(v.begin(),v.end());
 reverse(v.begin(),v.begin()+k);
 reverse(v.begin()+k,v.end());
for(int i=0;i<5;i++)
{
    cout<<v[i];
}

    return 0;
}