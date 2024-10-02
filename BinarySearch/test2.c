#include<stdio.h>
int searchRotatedSortedArray(int arr[], int n, int k) {
  // Write your code here
  int s=0,e=n-1;
  while(s<=e)
  {
    int mid=(s+e)/2;
    if(arr[mid]==k) return k;
    else if(arr[mid]<k)
    {
      s=mid+1;
    }
    else{
      s=mid-1;
    }

  }
  return -1;
  
}

int main()
{
  int T, i, size = 0,target;
  scanf("%d", &T);

  while (T--)
  {
    scanf("%d", &target);
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
      scanf("%d", &arr[i]);

    printf("%d\n",searchRotatedSortedArray(arr, size, target));
  }
  return 0;
}
