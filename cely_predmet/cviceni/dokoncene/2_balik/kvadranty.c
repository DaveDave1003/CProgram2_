#include <stdio.h>

int main (void){
    int x = 0;
    int y = 0;

    printf("Zadejte polohy x a y: \n");
    if (scanf("%d %d", &x, &y) != 2){
        printf("Spatny pocet vstupu \n");
        
    } else if (x == 0 && y == 0){
        printf("Bod lezi v pocatku \n");
    }

    else if (x == 0 && y != 0){
        printf("Bod lezi na ose y \n");
    }

    else if (x != 0 && y == 0){
        printf("Bod lezi na ose x \n");
    }

    else if (x > 0 && y > 0){
        printf("Bod lezi v I. kvadrantu \n");
    }
    
    else if (x < 0 && y > 0){
        printf("Bod lezi v II. kvadrantu \n");
    }

    else if (x < 0 && y < 0){
        printf("Bod lezi v III. kvadrantu \n");
    }

    else if (x > 0 && y < 0){
        printf("Bod lezi v IV. kvadrantu \n");
    }







    return 0;
}