#include<iostream>
#include<vector>
#include<shlwapi.h>
#include<libgen.h>


using namespace std;

void shortbyparity(vector<int> &v)
{
   int lptr=0;
   int rptr=v.size()-1;
   while(lptr<rptr)
   {
    if(v[lptr]%2==1 && v[rptr]%2==0)
    {
      swap(v[lptr],v[rptr]);
      lptr++;
      rptr--;

    }
    if(v[lptr]%2==0)
    {
        lptr++;
    }
    if(v[rptr]%2!=0)
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

        shortbyparity(v);
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    return 0;
}