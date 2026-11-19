#include <stdio.h>

int main (void){
    int numbers[]= {12, 5, 8, 4, 6, 75, 46, 144, 2, 13};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int max = numbers [0];

    for(int i=1; i < n; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }


    printf("Maximum v poli je: %d \n", max);

    return 0;
}