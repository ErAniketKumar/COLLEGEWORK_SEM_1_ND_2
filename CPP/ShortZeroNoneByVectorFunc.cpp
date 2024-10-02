#include<iostream>
#include<vector>
using namespace std;

void shortzeroNone(vector<int> &v)
{
   int lptr=0;
   int rptr=v.size()-1;
   while(lptr<rptr)
   {
    if(v[lptr]==1 && v[rptr]==0)
    {
        v[lptr++]=0;
        v[rptr]=1;
    }
    if(v[lptr]==0)
    {
        lptr++;
    }
    if(v[rptr]==1)
    {
        rptr--;
    }
   }
   return;
}

int main()
{
     int n;
         cin>>n;
         vector<int>v(n);
         for(int i=0;i<n;i++)
         {
            cin>>v[i];
         }

        shortzeroNone(v);
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";

        }
        cout<<endl;
    return 0;
}