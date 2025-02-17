#include <stdio.h>
#include <stdlib.h>
#include <time.h>
        /// precisa desses include para o time funcionar
int main () {
    int jogador, pc, resul;
    char comparacao;
    srand (time(0));
    pc = rand () % 100 + 1;

    printf ("**Bem Vindo Ao Jogo!**\n");
    printf ("Escola um acomparacao\n");
    printf ("M. maior \n");
    printf ("N. menor \n");
    printf ("I. Igual\n");
    scanf ("%c", &comparacao); 
    printf ("Digite um numero de 1 a 100\n");
    scanf ("%d", &jogador); 
    printf ("O computador escolheu: %d\n", pc);

    switch (comparacao){
      case 'M':
      case 'm':
      printf ("Voce escolheu comparar o maior\n");
      resul = jogador > pc ? 1:0;
         break;
    case 'N':
    case 'n':
    printf ("Voce escolheu comparar o menor\n");
        resul = jogador < pc ? 1:0;
            break;
    case 'I':
    case 'i':
    printf ("Voce escolheu o mais dificil\n");
        resul = jogador == pc ? 1:0;
    default:
    printf ("opcao invalida\n");
    break;
    printf ("O computador escolheu o numero %d e o voce escolheu: %d", pc, jogador);
 }
    if (resul == 1){
   printf ("Voce ganhou! \n");
 } else {
    printf ("Voce perdeu \n");
 }
}