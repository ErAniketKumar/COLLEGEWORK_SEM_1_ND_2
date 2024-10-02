#include<iostream>
#include<string.h>
#include<string>

using namespace std;
int main()
{
 int r,c;
 cin>>r>>c;
 int arr[r][c];
 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    }
 }
 int d1=0,d2=0;
  for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
       if(i==j)
       {
        d1+=arr[i][j];
       }
       
    }
 }
   for(int i = 0; i < r; i++) {
      d2 +=arr[i][c- i - 1];
   }

 int ans=d1-d2;
 if(ans<0)
 {
    cout<<-1*(ans);
 }
 else{
    cout<<ans;
 }
    return 0;
}