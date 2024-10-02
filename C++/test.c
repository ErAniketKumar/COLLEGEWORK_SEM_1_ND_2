  #include<stdio.h>
  int main()
  {
    int N=4;
    int arr[]={-2,8,3,5};
    

  int min=arr[0],max=arr[0];
  for(int i=0;i<N;i++)
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
  int c=0;
  for(int i=min;i<=max;i++)
  {
    c++;
  }
 int result=c-N;
 printf("%d",result);
  return 0;
}