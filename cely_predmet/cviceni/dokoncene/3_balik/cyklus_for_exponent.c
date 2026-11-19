#include <stdio.h>

int main (void){
    // vstup
    int a_zaklad;
    int n_exponent;
    long vysledek = 1;

    printf("Zadej zaklad A a exponent N: ");
    


    // podminky

    if (scanf("%d %d", &a_zaklad, &n_exponent) != 2 || n_exponent < 0) {
        printf("Chyba: Neplatny vstup. \n");
        return 1;
    }


    // vypocet
    for(int i = 0; i < n_exponent; i++ ) {
        vysledek = vysledek * a_zaklad;
        // vysledek *= zaklad;

    }

    // zobrazeni
    printf(" %d na %d je: %ld \n", a_zaklad, n_exponent, vysledek);



    return 0;
}