#include <stdio.h>

int main (void){

    float l = 0;
    float c = 0;
    float price = 0;
    float consmp = 0;
    float overall = 0;
    

    //input

    printf("Zadejte vzdalenost v km: \n");
    scanf("%f", &l);

    printf("Zadejte spotrebu v l/100km: \n");
    scanf("%f", &c);

    printf("Zadejte cenu paliva za litr: \n");
    scanf("%F", &price);

    //vypocet
    consmp = (l * c) / 100.00;

    overall = consmp * price;

    //vysledek
    printf("Celkova spotreba je %.2f litru a cena je %.2f \n", consmp, overall);


    return 0;



}