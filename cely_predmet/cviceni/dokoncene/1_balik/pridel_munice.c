#include <stdio.h>

int main (void){
    int munice = 0;
    int vojaci = 0;

    //input
    printf("Pocet munice ve skladu: ");
    scanf("%d", &munice);

    printf("Pocet vojaku v jednotce: ");

    scanf("%d", &vojaci);


    //vypocet
    int vydej = 0;
    vydej = munice / vojaci;

    int rezerva = 0;
    rezerva = munice % vojaci;



    //vysledek
    printf("Kazdy vojak dostane %d kusu munice \n", vydej);
    printf("V rezerve zustane %d kusu munice \n", rezerva);




    return 0;
}