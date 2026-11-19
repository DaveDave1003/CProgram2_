#include <stdio.h>
#include <stdlib.h>

int secti(int a, int b);


int main (int argc, char *argv[]) {
    printf("Co je v argc? : %d \n", argc);

    int soucet = secti(atoi(argv[1]), atoi(argv[2]));

    printf("Soucet je: %d \n", soucet);
    return 0;
}

int secti(int a, int b){
    return a + b;
}