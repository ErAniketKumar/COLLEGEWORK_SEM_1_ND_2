 #include<stdio.h>

 int main()
 {
  int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }
   int trr[r][c];
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        trr[i][j]=0;
      }
    }
    for(int i=0;i<c;i++)
    {
      for(int j=0;j<r;j++)
      {
        trr[i][j]=arr[j][i];
      }
    }
     for(int i=0;i<r;i++)
        {
           int s=0,e=c-1;
           while(s<e)
           {
            int temp=trr[i][e];
            trr[i][e]=trr[i][s];
            trr[i][s]=temp;
            s++;
            e--;

           }
        }
    
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",trr[i][j]);
        }
        printf("\n");
    }
    return 0;
 }