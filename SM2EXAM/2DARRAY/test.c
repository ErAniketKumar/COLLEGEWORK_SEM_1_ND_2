#include <stdio.h>
/* Include other headers as needed */
int main()
{
int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
    }
    //transpose
    for(int i=0;i<n;i++)
    {
      for(int j=i;j<n;j++)
      {
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
      }
    }
    for(int i=0;i<n;i++)
    {
      int s=0,e=n-1;
      while(s<e)
      {
        int temp=arr[i][s];
        arr[i][s]=arr[i][e];
        arr[i][e]=temp;
        s++;e--;
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        printf("%d ",arr[i][j]);
      }
      printf("\n");
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}