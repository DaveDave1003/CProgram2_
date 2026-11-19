#include <stdio.h>
#define SIZE 10

int main (void){
    int numbers[SIZE]= {12, 5, 8, 4, 6, 75, 46, 144, 2, 13};
    int change = 0;

    for(int i = 0; i < SIZE; i++){
        
        for(int j = 0; j < (SIZE-1-i); j++){

            if(numbers[j] > numbers[j+1]){
                change = numbers[j];
                numbers[j] = numbers[j+1];
                numbers [j+1] = change;
            }
        }
    }

    for(int i = 0; i < SIZE; i++){
        printf("%d ", numbers[i]);
    }   
    return 0;
}
