#include <stdio.h>
int main(){
    int N, quantia, i, c, s, r, total;
    char tipo;
   float pr, ps, pc;
    
    s= 0;
    r = 0;
    c = 0; 
    scanf("%d", &N);
    for (i= 0; i <= N-1; i++){
       
     scanf ("%d %c", &quantia, &tipo);   
        if (tipo == 'C'){
            c += quantia;
        }
        if(tipo =='R'){
            r += quantia;
        }    
        if(tipo == 'S'){
            s += quantia;
        }
    }
    
    total= s+c+r;
    pc = c /total*100.00;
    pr = r /total*100.00;
    ps = s /total*100.00;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f\n", pc);
    printf("Percentual de ratos: %.2f\n", pr);
    printf("Percentual de sapos: %.2f\n", ps);
    
    return(0);
}