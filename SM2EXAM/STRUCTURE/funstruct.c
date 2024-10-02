#include<stdio.h>
#include<stdbool.h>
#include<string.h>


    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[10];
    } pokemon ;
 
void fun(pokemon p)
{
        printf("%d",p.hp);
      
}
int main()
{

    pokemon pikachu;
    pikachu.hp=60;

    fun(pikachu);



    return 0;
}