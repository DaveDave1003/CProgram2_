#include <stdio.h>

int main (void){
    //zadani hodnot
    float a = 0;
    float b = 0;

    printf("Zadej delku strany a: ");
    scanf("%f", &a);
    printf("Zadej hodnotu strany b: ");
    scanf("%f", &b);


    //vypocet
    float s = 0;
    s = a * b;

    float o = 0;
    o = 2 * (a+b);

    //vysledek
    printf("Obsah: %.2f \n", s);
    printf("Obvod: %.2f \n", o);




    return 0;
}