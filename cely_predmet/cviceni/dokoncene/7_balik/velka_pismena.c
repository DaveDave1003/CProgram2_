#include<stdio.h>
#include<string.h>
#define MAX_DELKA 100

int main(void){
    char retezec[MAX_DELKA];
    char velka[MAX_DELKA];
    int velka_pismena = 0;

    printf("Zadejte text (max. %d pismen): ", MAX_DELKA);
    fgets(retezec, MAX_DELKA, stdin);
    printf("Puvodni text: %s", retezec);

    for(int i = 0; i < strlen(retezec) - 1; i++){
        if (retezec[i] >= 'A' && retezec[i] <= 'Z'){
            velka[velka_pismena] = retezec[i];
            velka_pismena++;
        }
    }

    printf("Velky text: %s \n", velka);
    printf("Delka pro velka pismena: %d \n", strlen(velka));


    return 0;
}
