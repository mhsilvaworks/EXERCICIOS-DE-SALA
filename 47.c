//MATHEUS HENRIQUE DA SILVA RA:22500407
#include<stdio.h>
#include <math.h>

int main(){
    int h, m, h1,m1;
    printf("Informe as horas inicias: ");
    scanf("%d", &h);
    printf("Informe os minutos inicias: ");
    scanf("%d", &m);
    printf("Informe as horas finais: ");
    scanf("%d", &h1);  
    printf("Informe os minutos finais: ");
    scanf("%d", &m1);

    h = h1-h;
    m = m1-m;
    if(h<=0){
    if (m<=0){
        h=24;
    }
    }
    printf ("O JOGO DUROU %d HORA(s) E %d MINUTO(s)\n", h, m);


    return (0);
}