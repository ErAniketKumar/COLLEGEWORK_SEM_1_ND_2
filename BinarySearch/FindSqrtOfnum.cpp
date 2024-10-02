///find squire root of num round of near value 
#include<iostream>
using namespace std;
int sqrtff(int x)
{
 int s=1,e=x;
 int ans=-1;
 while(s<=e)
 {
    int mid=s+(e-s)/2;
    if(mid*mid<=x)
    {
        ans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;

    }
 }
  return ans;
}
int main()
{
int x; cin>>x;



int res= sqrtff(x);
cout<<res;

    return 0;
}