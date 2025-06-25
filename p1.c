// Uma empresa deseja desenvolver um sistema para cadastro de produtos em um estoque, com as seguintes funcionalidades e regras:
// O sistema deve permitir o cadastro de múltiplos produtos, sendo que cada produto possui:
// Nome (string)
// Quantidade (inteiro positivo)
// Preço unitário (float positivo)
// Antes de iniciar o cadastro, o sistema deve obrigar o usuário a digitar um código de segurança (senha), com no máximo 3 tentativas. A senha correta é "estoque2025". Se o usuário não acertar, o programa deve encerrar com a mensagem "Acesso negado".
// Após o acesso ser liberado, o sistema deve entrar em um loop de cadastro que permite ao usuário inserir os dados de um produto por vez.
// O nome do produto não pode ser vazio e a quantidade e o preço devem ser maiores que zero. O sistema deve validar essas entradas.
// Ao final de cada cadastro, o usuário será perguntado se deseja continuar cadastrando outro produto. O sistema deve aceitar apenas 'S' para continuar e 'N' para encerrar.
// Ao final do programa, exibir a quantidade total de produtos cadastrados e o valor total do estoque (soma da quantidade × preço de todos os produtos).

// Requisitos obrigatórios no código:

// Usar do...while para:

// Validar a entrada da senha (com limite de tentativas)
// Validar os dados de cada produto
#include <stdio.h>   
#include <string.h>  
#include <stdlib.h>  

int main() {
    
    int a,qt=0;
    char nome[100], soun;       
    float pu = 0.0,pt=0;
    int quantidade;
    char senha[20];         
    int tentativas = 0;
    const char SENHA_CORRETA[] = "estoque2025"; 
    const int MAX_TENTATIVAS = 3;            

    do {
        printf("Digite a senha de seguranca: ");
      
        scanf("%19s", senha);

       
        if (strcmp(senha, SENHA_CORRETA) == 0) {
             printf("Acesso liberado!\n");
            do
            {
                a=0;
            printf("Informe o nome do produto: ");
            scanf("%s",&nome);
            printf("Informe a quantidade do produto: ");
            scanf("%d", &quantidade);
            if (quantidade <=0)
            {
               
                do
                {
                    
                printf("ERRO\n");
                printf("Insira um valor maior que 0\n");
                printf("Informe a quantidade do produto: ");
                scanf("%d", &quantidade);
                
                } while (quantidade <=0);
                
            }
            
            printf("Iforme o preco unitario: ");
            scanf("%f", &pu);
             if (pu <=0)
            {
               
                do
                {
                    
                printf("ERRO\n");
                printf("Insira um valor maior que 0\n");
                printf("Iforme o preco unitario: ");
                scanf("%f", &pu);
                } while (pu <= 0);
                
            }
            qt = qt + quantidade;
            pt += quantidade * pu;
            do
            {
                printf("deseja continuar cadastrando outro produto[S][N]:");
            scanf("%s", &soun);
                if (soun == 'S' || soun =='N')
                {
                 a =3;   
                } else {
                    printf("Esta incorreto, tente novamente S/N.\n");
                }
                
                
            } while (a!= 3);
             
            
            } while (soun != 'N');
            
           
            break;
        } else {
            
            tentativas = tentativas + 1;

            
          
        }
    } while (tentativas < MAX_TENTATIVAS); 
    printf("O estoque tem no total %d produtos.\n",qt);
    printf("O valor total do estoque e de %2.f reais.",pt);
    

    return 0;
}