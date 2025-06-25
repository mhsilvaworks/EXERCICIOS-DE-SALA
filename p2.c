//Nesse exercício foi criado um sistem de registro de pacientes em uma clínica.
#include <stdio.h>   
#include <string.h>  
#include <stdlib.h>  

int main() {
        int qpaci=0, maiortempo=0, tempo,idade,ci=0,x;
        char nome[100],mais[100];
        float media,ct;
    printf (" \n");
    printf("-------------- CLINICA ---------------\n");
    printf (" \n");
    
    printf("Quantidade de pacientes que serao registrados: ");
    scanf("%d",&qpaci);
    printf (" \n");
    x = qpaci;
    if (qpaci>0)
    {
        for (int i = 0; i < qpaci; i++)
        {
            printf("========== PACIENTE %d ==========\n", i+1);
            printf("Nome:");   
            scanf("%99s", &nome);
            printf("Idade: ");
            scanf("%d", &idade);
            if (idade <0)
            {
                for (int j = 0; j < 99; )
                {
                    printf("ERRO\n");
                    printf("INFORME UMA IDADE VÁLIDA.\n O valor deve ser positivo.\n");
                    printf("Idade: ");
                    scanf("%d", &idade);

                    if (idade >0)
                        {
                            j = 99;
                            printf("idade válida.\n");
                        }
                    
                }
                
            }
            printf("tempo de atendimento em minutos: ");
            scanf("%d", &tempo);

            if (tempo <0)
            {
                for (int j = 0; j < 99; )
                {
                    printf("ERRO\n");
                    printf(".\n O valor deve ser positivo.\n");
                    printf("tempo de atendimento em minutos: ");
                    scanf("%d", &tempo);

                    if (tempo >0)
                        {
                            j = 99;
                            printf("idade válida.\n");
                        }
                    
                }
                
            }
            
           
            media =media +tempo;
            if (tempo>maiortempo)
            {
                maiortempo=tempo;
                strcpy(mais , nome);
            }
            if (tempo <10)
            {
                ct= ct+1;
            }
            if (idade>= 60)
            {
                ci = ci+1;
            }
            
            



        }

        
    }
    else{
        printf("ERRO, nao ha pacientes para registrar.\n");
    }
    printf("CI = %d , QPACI= %d",ci,x);
    media= media/qpaci;
    float velho = 0;
    velho = (ci*100)/x;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-\n");
    printf(" \n");
    printf("   ========================RELATÓRIO========================== \n");
    printf("Tempo medio de atendimento: %2.f\n", media);
    printf("Paciente com maior tempo de atendimento: %s- %d minutos\n",mais, maiortempo);
    printf("Porcentagem de pacientes com mais de 60 anos: %2.f%%\n", velho);

    return 0;
}