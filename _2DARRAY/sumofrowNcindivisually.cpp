#include<iostream>
using namespace std;
void sumofrc(int r, int c, int arr[][c],int R, char ch)
{
    
}
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
      int R;
      cin>>R;
      char ch;
      cin>>ch;
      sumofrc(r,c,arr,R,ch);
    return 0;
}