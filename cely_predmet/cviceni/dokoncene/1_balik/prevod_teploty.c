#include <stdio.h>


int main(void){
    
    float c = 0;
    
    //input
    printf("Zadejte teplotu Celia na desetinne misto: ");
    scanf("%f", &c);


    //vypocet
    float f = 0;
    f = c * (9.0/5.0) + 32.0;

    //vysledek
    printf("Teplota je %.2f Fahrenheita", f);



    return 0;
}