#include <stdio.h>

int main (void){
    //hodnoty
    float w = 0;
    float h = 0;


    printf("Zadejte svou vahu: ");
    scanf("%f", &w);
    printf("Zadejte svou vysku v metrech: "); 
    scanf("%f", &h);


    //vypocet
    float bmi = 0;
    bmi = w / (h * h);





    //vysledek
    printf("Vase hodnota BMI je %.2f \n", bmi);




    return 0;
}