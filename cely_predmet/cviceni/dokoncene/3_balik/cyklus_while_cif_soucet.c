#include <stdio.h>

int main (void){

    int n;
    int sum = 0;

    // vstup
    printf("Zadej kladne cele cislo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Chyba: Zadejte nezaporne cele cislo \n");
        return 1;
    }


    // vypocet
    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }


    // vysledek
    printf("Ciferny soucet cisla %d je %d \n", n, sum);



    return 0;
}