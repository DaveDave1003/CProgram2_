#include <stdio.h>
#include <math.h>


int main (void){
    
    //Vstup
    int a, b, c;
    printf("Zadej tri strany: ");
    if ( scanf("%d %d %d", &a, &b, &c) != 3 ){
        printf("Neplatny pocet stran");
        return 1;

    }

    printf("Zadali jste strany %d %d %d \n", a, b, c);


    //Kontrola na kladne hodnoty
    if ( a <= 0 || b <= 0 || c <= 0) {
        printf("Hodnota neni kladna \n");

    }


    //Trojuhelnik nerovnost
    if ( a + b > c && a + c > b && b + c > a) {
        printf("Trojuhelnik lze sestrojit \n");

        //typ trojuhelniku

        if ( a == b && b == c) {
            printf("Trojuhelnik je rovnostranny \n");
        }

        else if ( a == b || b == c || a == c ) {
            printf("Trojuhelnik je rovnoramenny \n");
        } else{
            printf("Trojuhelnik je obecny / ruznostranny \n");
        }
        
        int x = 0;
        
        
        //jake jsou uhly
        if (a>b){
            x = a;
        } else{
            x = b;
        }
        
        if ((x > c) == 0){
            x = c;
        }

        if (a*a + b*b + c*c - x*x == x*x){
            printf("Trojuhelnik je pravouhly \n");
        }
        else if (a*a + b*b + c*c - x*x < x*x){
            printf("Trojuhelnik je tupouhly \n");
        } else {
            printf("Trojuhelnik je ostrouhly \n");
        }


        // OBSAH
        float s = 0;
        s = (a+b+c)/ 2;

        float S = 0;
        S = sqrt(s*(s-a)*(s-b)*(s-c));

        printf("Obsah je %.2f", S);



    } else{
        printf("Trojuhelnk nelze sestrojit \n");
    }



    return 0;
}

