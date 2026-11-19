#include <stdio.h>

int main (void){
    
    int velikost;

    printf("Zadejte velikost strany ctverce: ");
    scanf("%d", &velikost);



    for (int i = 0; i < velikost; i++){
        
        if (i == 0 || i == velikost - 1){
            for (int i = 0; i < velikost; i++){
                printf("*");
            }

        } else{
            printf("*");
            
            for (int i = 0; i < velikost - 2; i++){
                printf(" ");
            } printf("*");
        }
        printf("\n");

    }



    return 0;
}