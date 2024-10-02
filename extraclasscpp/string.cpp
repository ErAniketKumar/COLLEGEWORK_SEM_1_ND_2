#include<iostream>
using namespace std;
void fun(char *ch)
{

   printf("%s",ch);
}

int main()
{
   char ch[100];
//    for (int i = 0; i <40; i++) {
//       scanf("%c", &str[i]);
//       if (str[i] == '\n' ) {
//          break;
//       }
//    }

char x;

scanf("%c",&x);
scanf(" %[^\n]",ch);
printf("%s\n",ch);
printf("%c\n",x);

    
    return 0;
}