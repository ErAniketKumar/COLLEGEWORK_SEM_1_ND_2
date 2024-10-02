#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pekemon{
    int hp;
    int speed;
    char name[10];
    char tier;
} pokemon; 
///pokemon ek data type hai jo struct type ko denote kr rha hai

int main()
{
pokemon pikachu;
pikachu.hp=60;
pikachu.speed=90;
strcpy(pikachu.name,"Aflatoon");
pikachu.tier='A';

pokemon* x=&pikachu;
// printf("%d\n",x);

printf("%d\n",x->hp);
printf("%d\n",x->speed);
printf("%s\n",x->name);
printf("%d\n",x->hp);
x->hp=40; ///change hp value

printf("%d\n",x->hp);


// printf("%d\n",&pikachu.speed);
// printf("%d\n",&pikachu.name);
// printf("%d\n",&pikachu.tier);


    return 0;
}