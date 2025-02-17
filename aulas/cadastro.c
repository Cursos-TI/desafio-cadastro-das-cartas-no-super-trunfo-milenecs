#include <stdio.h>

int main () {
    int opcao;
    double media;
    int n1, n2 [6];

    printf("Bem vindo ao Menu De Cadastro estudantil \n O que deseja fazer \n");
    printf("1. Calcular a Media \n");
    printf("2. Saiba se foi aprovado! \n");
    printf("3. Sair \n");
    scanf("%d", &opcao);
 
    switch (opcao){
        case 1: 
        printf("Digite a sua primeira: \n");
        scanf("%d", &n1);
        printf("Digite a sua segunda nota \n");
        scanf("%d", &n2);
            if ((n1 >=0 && n1 <= 10) && (n2 >=0 && n2 <= 10)){
            media = (n1 + n2) / 2;
        printf ("Sua media é %.2f \n", media);
        } else {
            printf ("valor invalido \n");
        } break;
        case 2:
            ("Para saber se foi aprovado digite sua media \n");
            ("%f", &media);
            media >= 6 ? printf ("Parabens, voca foi aprovado! \n"):("Nao foi dessa vez \n");
            break;
        case 3:
            printf ("ate a proxima");
            break;
        default:
        printf ("opcao invalida \n");

    }


    //printf("Digite a sua nota: ");
    //scanf("%d", &nota);

   // if (nota >= 90) {
   //  printf("Sua nota é A, parabens!\n");
  //
}