#include <stdio.h>

void message(){
    printf("Explosives and school does not mix. \n");
}

// main VZDY jako posledni
int main(void){
    int i = 1;
    while( i <= 5) {
        message();
        i++;
    }
}

