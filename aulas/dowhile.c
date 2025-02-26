#include <stdio.h>

    int main (){
         int num;
                
       
          printf("Digite um número (negativo para sair): \n");
          scanf("%d", &num);
         
          do {
            printf("%d\n", num);
            num++;
        } while (num == 10); {
              printf("Você digitou: %d\n", num);
             
              printf("Digite um número (negativo para sair): \n");
              scanf("%d", &num);
        }
          printf("Número negativo detectado. Saindo...\n");
    
        return 0;
        }
       