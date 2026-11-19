#include <stdio.h>

int main (void){
    char z;
    int hodnota = 0;

    printf("Zadej velky znak rimske cislice: ");
    scanf("%c", &z);


    switch(z){
        case 'I':
            hodnota = 1;
            printf("Znak: %c \n", z);
            printf("Hodnota: %d \n", hodnota);
            break;
        
        case 'V':
            hodnota = 5;
            printf("Znak: %c \n", z);
            printf("Hodnota: %d \n", hodnota);
            break;
        
        case 'X':
            hodnota = 10;
            printf("Znak: %c \n", z);
            printf("Hodnota: %d \n", hodnota);
            break;

        case 'L':
            hodnota = 50;
            printf("Znak: %c \n", z);
            printf("Hodnota: %d \n", hodnota);
            break;
        
        case 'C':
            hodnota = 100;
            printf("Znak: %c \n", z);
            printf("Hodnota: %d \n", hodnota);
            break;
        
        case 'D':
            hodnota = 500;
            printf("Znak: %c \n", z);
            printf("Hodnota: %d \n", hodnota);
            break;
        
        case 'M':
            hodnota = 1000;
            printf("Znak: %c \n", z);
            printf("Hodnota: %d \n", hodnota);
            break;
        
        default:
            printf("Znak: %c \n", z);
            printf("Neplatna cislice");
            break;
    }   


    return 0;
}