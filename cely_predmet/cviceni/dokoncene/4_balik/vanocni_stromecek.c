#include <stdio.h>


int main(void){
    //input
    int floors = 0;
    
    //kmen
    int height_kmen = 0;
    int widht_kmen = 0;
   

    printf("Zadejte kolik ma stromecek pater: ");
    scanf("%d", &floors);

    int max_height = 2 + floors;
    int max_widht = 2 * max_height - 1;

    printf("Zadejte vysku a sirku kmene: ");
    scanf("%d %d", &height_kmen, &widht_kmen);

    int space_kmen = (max_widht - widht_kmen) / 2;

    //trojuhelniky
    for(int i = 1; i <= floors; i++){
        int height_floor = i + 2;

        for(int j = i; j <= height_floor; j++){
            int stars = 2 * j - 1;
            int space = (max_widht - stars) / 2;

            for(int sp = 0; sp < space; sp++){
                printf(" ");
            }
        

            for (int st = 0; st < stars; st++){
                printf("*");
            }

            printf("\n");
        }
    }

   

    

    for(int r = 0; r < height_kmen; r++){
        for (int m = 0; m < space_kmen; m++){
            printf(" ");
        }
        for (int h = 0; h < widht_kmen; h++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
