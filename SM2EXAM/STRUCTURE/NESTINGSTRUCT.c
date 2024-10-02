#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct car{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[10];
    } car;


    typedef struct spcl{
        car normal; // normal card above wala sabkuchh hai bas esme ability extra hai hai

        char ability[10];

    } spcl;
     spcl spclcar;
     strcpy(spclcar.ability, "HHH");
     printf("%s\n",spclcar.ability);
     // upar wali chijo ko access karne k liye

     spclcar.normal.speed=80;
     printf("%d",spclcar.normal.speed);




    return 0;
}