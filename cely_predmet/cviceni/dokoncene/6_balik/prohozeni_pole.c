#include <stdio.h>
#define SIZE 10

int main (void){
    int numbers[SIZE]= {12, 5, 8, 4, 6, 75, 46, 144, 2, 13};
    int temp = 0;

    for(int i = 0; i < SIZE / 2; i++){
        temp = numbers[i];
        numbers[i] = numbers[SIZE-i-1];
        numbers[SIZE-i-1] = temp;
    }
    for(int i = 0; i < SIZE; i++){
        printf("%d", numbers[i]);
    }
    return 0;
}