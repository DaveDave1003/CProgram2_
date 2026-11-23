#include <stdio.h>

void hexadec(int cislo){

    int zbytek;
    char vysledek[32];
    int i = 0;

    if(cislo == 0){
        printf("0");
    }

    while (cislo > 0){
        zbytek = cislo % 16;
        cislo /= 16;

        if (zbytek < 10){
            zbytek = zbytek + '0';

        }else if(zbytek == 10){
            zbytek = 'A';

        }else if(zbytek == 11){
            zbytek = 'B';

        }else if(zbytek == 12){
            zbytek = 'C';

        }else if(zbytek == 13){
            zbytek = 'D';

        }else if(zbytek == 14){
            zbytek = 'E';

        }else{
            zbytek = 'F';
        }

        vysledek[i] = zbytek;
        i++;
    }
    
    for (int j =  i-1; j >= 0; j--){
        printf("%c", vysledek[j]);
    }

    printf("\n");
}

int main(void){
    int cislo;
    
    printf("Zadejte cislo na prevod: ");
    scanf("%d", &cislo);

    printf("Zadane cislo: %d \n", cislo);
    printf("Prevedene cislo:  ");

    hexadec(cislo);

    



    return 0;
}