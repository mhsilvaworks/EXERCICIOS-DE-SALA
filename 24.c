#include <stdio.h>
int main ()
{
    int N, cont, resultado;
    scanf("%d", &N);
    if ( N > 2 & N <1000){
    for (cont = 1; cont<= 10; cont++ ){
        resultado = cont*N;
        printf("%d  x %d = %d\n", cont, N, resultado);
    }
    }
    else 
    printf ("Informe um numero  menor que 1000");
    return (0);
}