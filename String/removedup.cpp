#include<iostream>
#include<algorithm>
using namespace std;

int dub(int *arr,int s){
    int i=0;
   
    for(int j=1;j<s;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main()
{
    int arr[]{2,3,4,7,4,2,2,7,3};
     sort(arr,arr+(sizeof(arr)/sizeof(int)));
    int s=(sizeof(arr)/sizeof(int));
    
      arr[s]=dub(arr,s);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
