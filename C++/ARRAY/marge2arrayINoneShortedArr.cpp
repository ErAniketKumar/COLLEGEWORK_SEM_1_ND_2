#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    vector<int>v1(m);
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    cin>>n;

    vector<int>v2(n);
      for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    int result[m+n];
    int i=0;//will help to ittrate v1
    int j=0; //will help to ittrate v2
    int k=0; //will help yo ittrate v
    while(i<m and j<n)
    {
         if(v1[i]<v2[j])
      {
        result[k]=v1[i];
        k++;
        i++;
      }
      else{
        result[k]=v2[j];
        k++;
        j++;
      }
    }
    while(i<m)
    {
         result[k]=v1[i];
         i++;
         k++;
    }
    while(j<n)
    {
        result[k]=v2[j];
        k++;
        j++;
    }
    for(int i=0;i<m+n;i++)
    {
      cout<<result[i]<<" ";

    }
    return 0;
}