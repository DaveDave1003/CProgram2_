#include <stdio.h>


int main (void){

    int castka = 0;


    //input
    printf("Zadejte celou castku v kc: ");
    scanf("%d", &castka);

    //vypocet
    int petset = 0;
    petset = castka / 500;

    int sto = 0;
    sto = (castka%500) / 100;

    int koruny = 0;
    koruny = castka % 100;

    //vysledek
    printf("Vase hodnota je %d petset bankovek, %d sto bankovek a %d korun \n", petset, sto, koruny);





    return 0;
}