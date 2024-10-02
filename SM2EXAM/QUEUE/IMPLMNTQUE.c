#include<stdio.h>
#include<string.h>

    int front =-1,rear=-1;
     #define size 20
    int que[size];
void enqueue(int item)
{
    if(rear==size-1)
    {
        return;
    }
    else if(front==-1&&rear==-1)
    {
       front=rear=0;
    }

    que[rear++]=item;
}
void dequeue()
{
    if(front==-1)
    {
        return;
    }
    printf("%d\n",que[front]);
    if(front==rear)
    {
        front=rear=-1;
    }
    else{
        front++;
    }
}
  int arr[size];
void reverse(int* que)
{
  
    int i=-1;
    while(front<=rear)
    {
        int item=dequeue();
        i++;
        arr[i]=item;
    }    
}
int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   enqueue(50);
   enqueue(60);
   reverse(que);
for(int i=0;i<size;i++)
{
    printf("%d ",arr[i]);
}
   


    return 0;
}