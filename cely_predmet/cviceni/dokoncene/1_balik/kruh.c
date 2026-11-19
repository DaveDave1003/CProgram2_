#include <stdio.h>

int main(void){
    
    //Zadani hdonot
    
    float pi = 3.14;
    float polomer = 0;
    printf("Zadej polomer kruhu:");
    scanf("%f", &polomer);
    
    //Vypocet obvod
    float o = 0;
    o = 2 * pi * polomer;


    //Vypocet obsah
    float s = 0;
    s = pi * polomer*polomer;

    //Vypis
    printf("Polomer: %.2f \n", polomer);
    printf("Obvod: %.2f \n", o);
    printf("Obsah: %.2f \n", s);
    return 0;


}