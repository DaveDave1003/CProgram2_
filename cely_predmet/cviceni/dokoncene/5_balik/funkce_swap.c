#include <stdio.h>


void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    printf("Behem funkce: a, b = %d, %d \n", a, b);
}

int main(void){
    int a = 4;
    int b = 5;
    printf("Pred funkci: a, b = %d, %d \n", a, b);
    swap(a,b);
    printf("Po funkci: a, b = %d, %d \n", a, b);
    return 0;
}