#include<iostream>
using namespace std;
int main()
{
  int a[]={2,3,1,2,5,6,8,5,3};
  int b[*(&a + 1) - a];
  for (int i = 0; i < *(&a + 1) - a; i++) 
  b[i] = 0;
  for(int i=0;i<*(&a+1)-a;i++)
  {
    int freq=1,check=0;
    for(int j=0;j<i;j++)
    {
        if(a[i]==b[j]){
        check++;
        break;
        }
    }
    if(!check)
    {
      b[i]=a[i];
      for(int j=i+1;j<*(&a+1)-a;j++)
      {
        if(a[i]==a[j])
        {
          freq++;
        }
      }
      cout<<a[i]<<"-"<<freq<<endl;
    
    }


  }



    return 0;
}

















//  int a[]={0,1,2,3,1,2,5,6,8,3};
//   int b[*(&a + 1) - a];
//   for (int i = 0; i < *(&a + 1) - a; i++) 
//   b[i] = 0;

//   for (int i = 0; i < *(&a + 1) - a; i++) {
//     int freq = 1, check = 0;
//     for (int j = 0; j < i; j++) {
//       if (a[i] == b[j]){
//         check++;
//         break;
//       }
//     }
//     if (!check){
//       b[i] = a[i];
//       for (int j = i + 1; j < *(&a + 1) - a; j++) {
//         if (a[i] == a[j]) freq++;
//       }
//       cout<<a[i]<<" - "<<freq<<endl;
//     }
//   }



