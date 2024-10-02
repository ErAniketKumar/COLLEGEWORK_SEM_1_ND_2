#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //frequency Array Making (only array Use)
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }
    }
    int freq[max+1];
    for(int i=0;i<max+1;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        freq[arr[i]]++;
    }
    
 //// Frequency array making use vector & array
   
    // int size;
    // cin>>size;
    // vector<int>v(size);
    // for(int i=0;i<size;i++)
    // {
    //     cin>>v[i];
    // }

    // const int N = 1e5 + 10;
    // vector<int>freq(N,0);
    // for(int i=0;i<size;i++)
    // {
    //     freq[v[i]]++;
    // }  

    return 0;
}