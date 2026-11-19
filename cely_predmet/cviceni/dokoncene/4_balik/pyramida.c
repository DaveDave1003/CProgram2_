#include <stdio.h>


int main(void){
    int vyska;
    printf("Zadejte vysku piramidy: ");
    scanf("%d", &vyska);
    if (vyska > 105){
        printf("Piramida nemuze byt vetsi");
        return 1;
    } else {
        for (int i = 0; i < vyska; i++){

            for (int j = 0; j < vyska - i; j++){
                printf(" ");

            }
            int mezera = 1 + (2 * i);
            for (int k = 0; k < mezera; k++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}