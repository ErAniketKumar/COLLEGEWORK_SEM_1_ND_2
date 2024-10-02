#include<iostream>
#include<math.h>

#include<algorithm>
using namespace std;
void selsort(int *arr, int n)
{
    int min_idx,j;
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        if(min_idx!=i)
        {
            swap(arr[min_idx],arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
 
    int arr[5]={64,25,12,22,11};
    selsort(arr,5);

    return 0;
}