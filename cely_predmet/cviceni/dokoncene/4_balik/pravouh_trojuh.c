#include <stdio.h>


int main (void){

    int vyska;

    printf("Zadejte vysku trojuhelniku: ");
    scanf("%d", &vyska);

    for (int i = 0; i < vyska; i++){
        
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    // obraceny   
    for (int i = 0; i < vyska; i++){
        
        for (int j = vyska - i; j > 0; j--){
            printf(" ");
        }

        for (int x = i + 1; x > 0; x--) {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}