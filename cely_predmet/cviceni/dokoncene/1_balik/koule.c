#include <stdio.h>

int main (void){
    //zadani hodnot

    float pi = 3.14;
    float r = 0;

    printf("Zadej polomer kruhu:");
    scanf("%f", &r);

    //vypocet
    float v = 0;
    v = (4.0/3.0)* pi * r * r * r;

    float s = 0;
    s = 4 * pi * r * r;





    //vysledek
    printf("Objem: %.2f \n", v);
    printf("Obsah: %.2f \n", s);
    return 0;
}