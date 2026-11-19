#include <stdio.h>

int main (void){
    //zadani hodnot
    float vo = 0;
    float g = 9.81;

    printf("Zadejte ustovou rychlost v m/s na desetiny: ");
    scanf("%f", &vo);



    //vypocet

    float dmaxm = 0;
    dmaxm = (vo * vo) / g;   //metry

    float dmaxkm = 0;
    dmaxkm = dmaxm / 1000;   //kilometry



    //vysledek
    printf("Maximalni dostrel zbrane v m je: %.2f \n", dmaxm);
    printf("Maximalni dostrel zbrane v km je: %.2f", dmaxkm);






    return 0;
}