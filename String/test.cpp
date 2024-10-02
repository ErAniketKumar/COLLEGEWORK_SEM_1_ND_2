#include<iostream>
#include<string.h>
using namespace std;
int front =-1,rear=-1;
int size=20;
int arr[20];

void reverse(int *arr, int s)
{
    int st=0;
    int e=s;
    while(st<e)
    {
        swap(arr[st],arr[e]);
        st++;
        e--;
    }
    for(int i=0;i<=s;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void enque(int n)
{
    if(rear==size-1)
    {
        return;
    }
    if(front==-1 && rear==-1)
    {
        front++;
        rear++;
    }
    else{
        rear++;
    }
        arr[rear]=n;  
}
void deque()
{
    if(front==-1)
    {
        return;
    }
    cout<<arr[front]<<" ";
    if(front == rear)
    {
        front=rear=-1;
    }
    else{
        front++;
    }
}
int main()
{
    int t=6;
  
    while(t--)
    {

    int n;
    scanf("%d",&n);
    enque(n);
    }
    t=5;
//   while(t--)
//   deque();
  reverse(arr,rear);
    return 0;
}