#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pekemon{
    int hp;
    int speed;
    char name[10];
    char tier;
} pokemon; 

void fun(pokemon* p) 
{
    p->hp=1000;
    p->speed=20;
    strcpy(p->name,"ZEE");
    

}
int main()
{
pokemon pikachu;
pikachu.hp=60;
pikachu.speed=90;
strcpy(pikachu.name,"Aflatoon");
pikachu.tier='A';

printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.speed);
printf("%s\n",pikachu.name);
printf("%c\n",pikachu.tier);

fun(&pikachu);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.speed);
printf("%s\n",pikachu.name);
printf("%c\n",pikachu.tier);



    return 0;
}