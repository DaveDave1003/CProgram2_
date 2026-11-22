#include <stdio.h>
#include <string.h>
#define MAX_DELKA 100

int main(){
    char retezec[MAX_DELKA];
    printf("Zadejte retezec (max. %d znaku): ", MAX_DELKA);
    fgets(retezec, MAX_DELKA, stdin);
    int delka = strlen(retezec);
    printf("Retezec: %s", retezec);
    printf("Delka: %d", delka);

    return 0;

}