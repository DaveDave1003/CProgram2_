#include <stdio.h>
#include <string.h>
#define MAX_DELKA 100

int main (void){

    char text[MAX_DELKA];
    printf("Zadejte text ke kontrole palindru (max. %d znaku): ", MAX_DELKA);
    fgets(text, MAX_DELKA, stdin);
    char zmenseny[MAX_DELKA];

    int i = 0;
    int j = 0;

    for (;text[i] != '\0' && text[i] != '\n'; i++){
        if ( text[i] >= 'A' && text[i] <= 'Z'){
            zmenseny[j] = text[i] + 32;
            j++;
        }else if (text[i] >= 'a' && text[i] <= 'z'){
            zmenseny[j] = text[i];
            j++;
        }
    }

    zmenseny[j] = '\0';

    int je_palindrom = 1;
    int delka = strlen(zmenseny);

    for (i = 0; i < delka / 2; i++){
        if (zmenseny[i] != zmenseny[delka - 1 - i]){
            je_palindrom = 0;
            break;
        }

    }
    

    if(je_palindrom == 0){
        printf("Troubo tento text neni palindrom \n");
    }else{
        printf("Tento text je palindrom \n");
    }
    
        
            



    return 0;
}