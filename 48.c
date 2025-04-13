#include <stdio.h>
#include <math.h>

int main() {
    float x,n,r,p;
   
    scanf("%f", &x);
    if(0 <= x && x  <= 400){  
        n =115*x/100;
        p=15;
    }
    else if (400 < x && x  <= 800){
        n= x*112/100;
        p=12;
    }
    else if(800 < x && x  <= 1200){
        n=110*x/100;
        p=10;
    }
    else if(1200 <= x && x  <= 2000){
        n=107*x/100;
        p=7;
    }
    if(x>2000){
        n=104*x/100;
        p=4;
    }
    r = n-x;

    printf("Novo salario: %.2f\n", n);
    printf("Reajuste ganho: %.2f\n", r);
    printf("Em percentual: %.0f", p);
    printf("%%\n",p);

    return(0);
}