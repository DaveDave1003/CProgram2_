#include <stdio.h>


int main (void){

    int sirka, vyska;

    printf("Zadejte celou sirku a vysku obdelniku: ");
    scanf("%d %d", &sirka, &vyska);


for (int r = 0; r < vyska; ++r) {
    for (int c = 0; c < sirka; ++c) {
        putchar('*');
        
    }
    printf("\n");
}


    return 0;
}