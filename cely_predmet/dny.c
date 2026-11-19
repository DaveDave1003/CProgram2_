#include <stdio.h>

int main (void){
    int den;
    printf("Zadej cislo dne: ");
    scanf("%d", &den);

    printf("Reseni 1 (switchem): \n");
    switch(den) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Pracovni den \n");
            break;
        case 6:
        case 7:
            printf("Vikend \n");
        
        default:
            printf("Neplatne zadani");
            break;

    }

    printf("Reseni 2 (intervalem): \n");
    if (den >= 1 && den <= 5) {
        printf("Pracovni den \n");
    } else if (den == 6 || den == 7) {
        printf("Vikend \n");
    } else {
        printf("Neplatne zadani \n");
    }

    return 0;
}