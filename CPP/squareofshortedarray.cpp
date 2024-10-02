#include<iostream>
#include<vector>
#include<libgen.h>

using namespace std;
void shortedSqureArray(vector<int> &v)
{
    vector<int>ans;
      int lptr=0;
      int rptr=v.size()-1;
      while(lptr<=rptr)
      {
        if(abs(v[lptr])<abs(v[rptr]))
        {
            ans.push_back(v[rptr]*v[rptr]);
            rptr--;
        }
        else{
            ans.push_back(v[lptr]*v[lptr]);
            lptr++;
        }
      }
   
     for(int i=ans.size()-1;i>=0;i--)
     {
         cout<<ans[i]<<" ";

     }cout<<endl;

}



int main()
{
int n;
cin>>n;
vector<int>v;

for(int i=0;i<n;i++)
{
    int ele; cin>>ele;
    v.push_back(ele);
}
shortedSqureArray(v);

    return 0;
}