#include <stdio.h>
#include <string.h>
#define MAX_DELKA 100

int main (void){

    char text[MAX_DELKA];
    printf("Zadejte text k zasifrovani (max. %d znaku): ", MAX_DELKA);
    fgets(text, MAX_DELKA, stdin);
    int klic = 0;
    printf("Zadejte klic: ");
    scanf("%d", &klic);

    char zasifrovany[MAX_DELKA];


    int i = 0;
    for (;text[i] != '\0'; i++){
        if ( text[i] >= 'a' && text[i] <= 'z'){
            zasifrovany[i] = (text[i] - 'a' + klic) % 26 + 'a';

        }else if (text[i] >= 'A' && text[i] <= 'Z'){
                zasifrovany[i] = (text[i] - 'A' + klic) % 26 + 'A';

            }else{
                zasifrovany[i] = text[i];
            }
    }

    zasifrovany[i] = '\0';

    printf("Text: %s", text);
    printf("Zasifrovany: %s", zasifrovany);
    return 0;
}