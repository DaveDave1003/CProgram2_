#include <stdio.h>
#include <stdlib.h>

int suma(int zaklad);

int main (int argc, char *argv[]){
    int x = atoi(argv[1]);
    int soucet = suma(x);
    printf("Suma %d cisel je %d", x, soucet);


    return 0;
}
int suma(int zaklad){
    int soucet = 0;
    for(int i = 1; i <= zaklad; i++){
        soucet += i;
    }
    return soucet;
}