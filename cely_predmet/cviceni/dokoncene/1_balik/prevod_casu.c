#include <stdio.h>

int main(void){
    int sec = 0;

    //input
    printf("Zadejte cas v celych sekundach: ");
    scanf("%d", &sec);


    //vypocet
    int min = 0;
    min = sec / 60 ;
    

    int secl = 0;
    secl = sec % 60;

    int hod;
    hod = min / 60;
    min = min - hod*60;


    //vysledek
    printf("Cas je %d hod, %d minut a %d sekund", hod, min, secl);




    return 0;
}