#include <stdio.h>
#define MAX_DELKA 100

void zasifruj(char text[], char zasifruj[], int klic){
    int i = 0;
    for (; text[i] != '\0'; i++){
        if ( text[i] >= 'a' && text[i] <= 'z'){
            zasifruj[i] = (text[i] - 'a' + klic) % 26 + 'a';

        }else if (text[i] >= 'A' && text[i] <= 'Z'){
                zasifruj[i] = (text[i] - 'A' + klic) % 26 + 'A';

            }else{
                zasifruj[i] = text[i];
            }
    }

    zasifruj[i] = '\0';
}


int main(void){
    char text[MAX_DELKA];
    printf("Zadejte text k zasifrovani (max. %d znaku): ", MAX_DELKA);
    fgets(text, MAX_DELKA, stdin);

    int klic = 0;
    printf("Zadejte klic: ");
    scanf("%d", &klic);

    char zasifrovany[MAX_DELKA];

    zasifruj(text, zasifrovany, klic);

    printf("Text: %s", text);
    printf("Zasifrovany: %s", zasifrovany);



    return 0;
}