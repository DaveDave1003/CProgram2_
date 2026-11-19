#include <stdio.h>

int main (void){
    int rozmer;

    printf("Zadej rozmer sachovnice: ");
    scanf("%d", &rozmer);

    for (int i = 0; i < rozmer; i++){
        int rozdil = i;

        for (int j = 0; j < rozmer; j++){
            
            if (rozdil % 2 == 0){
                printf("O");
            } 
            else {
                printf("X");
            }
            
            rozdil ++;
            
        } printf("\n");
    }





    return 0;
}