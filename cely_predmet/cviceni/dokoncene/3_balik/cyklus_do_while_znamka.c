#include <stdio.h>


int main (void){
    // deklarace
    int znamka;
    int items_znamka;

    // vstup s kontrolou intervalu
    do {
        printf("Zadej znamku (1 az 5): ");
        scanf("%d", &znamka);

        
    } 
    while (znamka >= 1 || znamka <= 5); //slozene zavorky blbnou
    printf("Znamka je %d", znamka);
    
    // vystup
    


    return 0;
}