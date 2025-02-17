#include <stdio.h>
#include <stdlib.h>

        /// precisa desses include para o time funcionar
int main () {
    int op;
    char provincia1 [15];
    char codigo1 [4];
    char provincia2 [15];
    char codigo2 [4];
    double area1, populacao1, PIB1, NPT1, area2, populacao2, PIB2, NPT2;
    
    printf ("**Bem Vindo Ao Super Tunfo!**\n");
    printf ("1. Iniciar o jogo\n");
    printf ("2. Regras \n");
    printf ("3. Sair \n");
    scanf ("%d", &op);
 switch (op){
      case 1:
        printf("Vamos começar \n Digite Sua Provincia: \n");
        scanf("%s", provincia1);
        printf("Digite o Codigo da provinvia (ex: a1, b2...): \n");
        scanf("%s", codigo1);
        printf("Numero de habitantes: \n");
        scanf("%lf", &populacao1);
        printf("Area da cidade: \n");
        scanf("%lf", &area1);
        printf("PIB: \n");
        scanf("%lf", &PIB1);
        printf("Numero de Pontos Turisticos: \n");
        scanf("%lf", &NPT1);
     
        printf("  \n\n Carta do jogador 1: %s \n", provincia1);
        printf("Populacao: %.2lf \n", populacao1);
        printf("Area: %.2lf \n", area1);
        printf("PIB: %.2lf \n", PIB1);
        printf("Pontos Turisticos: %.2lf \n", NPT1);
        double DP1 = (populacao1 / area1);
        printf("densidade populacional: %.2lf \n", DP1);
        double PIBC1 = (PIB1/ populacao1);
        printf("PIB per capta: %.2lf \n", PIBC1);
        double poder1 = (area1 + populacao1 + PIB1  + NPT1 );
        printf("**Poder do jogador 1:** %.2lf \n", poder1);
            //jogador2
        printf(" \n\n Vez do jogador 2, digite Sua Provincia: \n");
        scanf("%s", provincia2);
        printf("Digite o Codigo da Cidade (ex: a1, b2...): \n");
        scanf("%s", codigo2);
        printf("Numero de habitantes: \n");
        scanf("%lf", &populacao2);
        printf("Area da cidade: \n");
        scanf("%lf", &area2);
        printf("PIB: \n");
        scanf("%lf", &PIB2);
        printf("Numero de Pontos Turisticos: \n");
        scanf("%lf", &NPT2);
    
        printf("\n \nCarta do jogador 2: %s \n", provincia2);
        printf("Populacao: %.2lf \n", populacao2);
        printf("Area: %.2lf \n", area2);
        printf("PIB: %.2lf \n", PIB2);
        printf("Pontos Turisticos: %.2lf \n", NPT2);
        double DP2 = (populacao2 / area2);
        printf("densidade populacional: %.2lf \n", DP2); 
        double PIBC2 = (PIB2 / populacao2);
        printf("PIB per capta: %.2lf \n", PIBC2);
        double poder2 = (area2 + populacao2 + PIB2  + NPT2 );
        printf("**Poder do jogador 2**: %.2lf \n", poder2);
        printf (" \n Hora Da Batalha \n Escolha a Caracteristica Que Deseja Comparar \n");
        printf ("4. Populacao\n");
        printf ("5. Area \n");
        printf ("6. PIB \n");
        printf ("7. Numero De Pontos Turisticos \n");
        printf ("8. Densidade Populacional \n");
        printf ("9. PIB per Capta \n");
        printf ("10. Poder \n");
        scanf ("%d", &op);
           case 4:
           printf ("A Provincia Com a Populacao maior foi do ");
           if (populacao1 > populacao2) {
            printf("jogador 1!\n");
            } else if (populacao1 < populacao2) { 
            printf("jogador 2!\n");
            } else if (populacao1 == populacao2) {
            printf("Empate! \n");
            }
            break;
            case 5:
            printf("A Provincia Com Maior Area foi do ");
            if (area1 > area2) {
            printf("Jogador 1! \n");
            } else if (area1 < area2) { 
             printf("Jogador 2! \n");
             } else if (area1 == area2) {
             printf("Empate! \n");
             }
            break;
            case 6:
            printf("A provincia com melhor PIB Foi do ");
             if (PIB1 > PIB2) {
             printf("Jogador 1! \n");
             } else if (PIB1 < PIB2) { 
            printf("Jogador 2! \n");
            } else if (PIB1 == PIB2) {
             printf("Empate! \n");
            }
            break;
            case 7:
            printf("A provincia com o maior numero de pontos turisticos foi do ");
            if (NPT1 > NPT2) {
            printf("Jogador 1! \n");
            } else if (NPT1 < NPT2) { 
            printf("Jogador 2! \n");
            } else if (NPT1 == NPT2) {
            printf("Empate! \n");
            }
            break;
            case 8:
            printf("A provincia com menor densidade populacional é do ");
            if (DP1 < DP2) {
            printf("Jogador 1! \n");
            } else if (DP1 > DP2) { 
            printf("Jogador 2! \n");
            } else if (DP1 == DP2) {
            printf("Empate! \n");
            }
            break;
            case 9:
            printf("A provincia com o melhor PIB per capta é do ");
            if (PIBC1 > PIBC2) {
            printf("Jogador 1! \n");
            } else if (PIBC1 < PIBC2) { 
            printf("Jogador 2! \n");
            } else if (PIBC1 == PIBC2) {
            printf("Empate! \n");
            break;
            }
            case 10:
            printf("A provincia mais poderosa é do ");
            if (poder1 > poder2) {
            printf("Jogador 1!\n");
            } else if (poder1 < poder2) { 
            printf("Jogador 2!\n");
            } else if (poder1 == poder2) {
            printf("Empate! \n");
            }
        break;
case 2:
    printf ("O Super Trunfo é um jogo bem simples\n Começe digitando o nome e o numero da sua provencia, e as informacoes \n Ganha aquele que tiver o maior valor \n");
        
        break;
case 3:
            printf ("Ate mais, Origada por jogar\n");
       break;
            default:
    printf ("Opcao invalida");
              break;
     }
 return 0;
    
    }