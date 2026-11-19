#include <stdio.h>

int main (void){

    char op;
    double a, b, vys;
    printf("Napiste priklad s pocetni operaci (+, -, *, /): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op){
        case '+':
            vys = a + b;
            printf("Vysledek: %.2f", vys);
            break;

        case '-':
            vys = a - b;
            printf("Vysledek: %.2f", vys);
            break;

        case '*':
            vys = a * b;
            printf("Vysledek: %.2f", vys);
            break;

        case '/':
            if (b != 0){
                vys = a / b;
                printf("Vysledek: %.2f", vys);
                break;
            } else{
                printf("Delit nulou nelze");
                break;

            }
        default:
            printf("Neplatna pocetni operace");
            break;
        
    }



    return 0;
}