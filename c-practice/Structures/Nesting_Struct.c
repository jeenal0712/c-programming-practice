#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon
    {
        char name[20];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;

    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[50];
    } legdpokemon;

    typedef struct godpokemon
    {
        legdpokemon legend;
        int specialability;
    }gpokemon;

    legdpokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.hp=150;
    mewtwo.normal.speed=180;
    mewtwo.normal.attack=180;
    mewtwo.normal.tier='S';

    gpokemon arceus;
    arceus.specialability=300;
    strcpy(arceus.legend.ability,"turns into stone");
    strcpy(arceus.legend.normal.name,"Arceus");
    arceus.legend.normal.attack=200;
    arceus.legend.normal.hp=160;
    arceus.legend.normal.speed=150;
    arceus.legend.normal.tier='G';

    return 0;
}