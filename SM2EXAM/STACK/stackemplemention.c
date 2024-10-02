#include<stdio.h>
 int i=1;
#define SIZE 5
int st[SIZE];
int top=-1;
int isfull()
{
    return top==(SIZE-1);
}
int isempty()
{
    return (top==-1);
}
int push(int item)
{
  if(isfull())
  {
   printf("STACK IS FULL\n");
    return -1;
  }
  top++;
    st[top]=item;
}
int pop()
{
    if(isempty()){
      printf("STACK IS EMPTEY\n");
        return -1;
    }
   
   printf("%d %d\n",i++,st[top--]);
}

int main()
{
    push(20);
    push(40);
    push(10);
    pop();
    push(15);
    pop();
    pop();
    pop();

    return 0;
}