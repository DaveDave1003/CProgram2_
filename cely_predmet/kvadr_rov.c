#include <stdio.h>
#include <math.h>


int main (void){
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;


    printf("Zadej hodnotu a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    float x1 = 0, x2 = 0, p = 0, q = 0;

    d = b*b -4*a*c;
    
    if (d >= 0){
        p = -b/(2*a);
        q = sqrt(d) / (2*a);
        x1 = p + q; 
        x2 = p - q;
        printf("x1=%.2f, x2=%.2f \n", x1, x2);
    } else {
        printf("Neexistuje reseni v R.");
    }

    





    return 0;
}