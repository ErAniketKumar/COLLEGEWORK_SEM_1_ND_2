#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the size of first array\n";
    cin>>m;
    int arr1[m];
    cout<<"enter the value of insert in array1\n";
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
     int n;
    cout<<"enter the size of second array\n";
    cin>>n;
    int arr2[n];
     cout<<"enter the value of insert in array2\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    int result[m+n];
    int i=0; //for ittrate arr1
    int j=0; //for ittrate arr2
    int k=0; //for ittrate reselt array
  while(i<m and j<n)
    {
         if(arr1[i]<arr2[j])
      {
        result[k]=arr1[i];
        k++;
        i++;
      }
      else{
        result[k]=arr2[j];
        k++;
        j++;
      }
    }
    while(i<m)
    {
         result[k]=arr1[i];
         i++;
         k++;
    }
    while(j<n)
    {
        result[k]=arr2[j];
        k++;
        j++;
    }

    cout<<"marge shorted array is\n";
    for(int i=0;i<m+n;i++)
    {
        cout<<result[i]<<" ";

    }
    return 0;
}