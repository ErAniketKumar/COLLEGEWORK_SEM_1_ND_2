#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,8,-1,5,6};

     int min=arr[0],max=arr[0];

  for(int i=0;i<7;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
    if(min>arr[i])
    {
      min=arr[i];
    }
  }
   cout<<min<<" "<<max<<endl;///-1 8
//    int c=0;
//    for(int i=min;i<=max;i++)
//    {
//       c++;
//    }
//    cout<<c<<endl; ////11
//    int ans=c-7; ///4
//    cout<<ans<<endl;




    return 0;
}