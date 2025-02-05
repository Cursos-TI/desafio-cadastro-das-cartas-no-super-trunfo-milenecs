#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    char provincia1 [20];
    char codigo1 [4];
    int area1, populacao1, PIB1, NPT1, resu1;

    char provincia2 [20];
    char codigo2 [4];
    int area2, populacao2, PIB2, NPT2, resu2;

        
        //Jogador 1 
    printf("Bem vindo, Digite Sua Provincia: \n");
    scanf("%s", &provincia1);
    printf("Digite o Codigo da provinvia (ex: a1, b2...): \n");
    scanf("%s", &codigo1);
    printf("Numero de habitantes: \n");
    scanf("%d", &populacao1);
    printf("Area da cidade: \n");
    scanf("%d", &area1);
    printf("PIB: \n");
    scanf("%d", &PIB1);
    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &NPT1);

    printf("\nCarta do jogador 1: %s \n", provincia1);
    printf("Codigo da carta: %s \n", codigo1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %d \n", area1);
    printf("PIB: %d \n", PIB1);
    printf("Pontos Turisticos: %d \n", NPT1);
    int DP1 = (populacao1 / area1);
        printf("densidade populacional: %d \n", DP1);
    int PIBC1 = (PIB1/ populacao1);
        printf("PIB per capta: %d \n", PIBC1);
    int poder1 = (area1 + populacao1 + PIB1  + NPT1 );
        printf("**Poder do jogador 1**: %d \n", poder1);
      

        //jogador2
    printf("Vez do jogador 2, digite Sua Provincia: \n");
    scanf("%s", &provincia2);
    printf("Digite o Codigo da Cidade (ex: a1, b2...): \n");
    scanf("%s", &codigo2);
    printf("Numero de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Area da cidade: \n");
    scanf("%d", &area2);
    printf("PIB: \n");
    scanf("%d", &PIB2);
    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &NPT2);

    printf("\nCarta do jogador 2: %s \n", provincia1);
    printf("Codigo da carta: %s \n", codigo2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %d \n", area2);
    printf("PIB: %d \n", PIB2);
    printf("Pontos Turisticos: %d \n", NPT2);
    int DP2 = (populacao2 / area2);
        printf("densidade populacional: %d \n", DP2); 
    int PIBC2 = (PIB2 / populacao2);
        printf("PIB per capta: %d \n", PIBC2);
    int poder2 = (area2 + populacao2 + PIB2  + NPT2 );
        printf("**Poder do jogador 2**: %d \n", poder2);
    
        if (populacao1 > populacao2) {
        printf("Parabens, o jogador 1 venceu!\n");
    } else if (populacao1 < populacao2) { 
        printf("Parabens, o jogador 2 venceu!\n");
    } else if (populacao1 = populacao2) {
        printf("Empate! \n");
    }
    
       if (area1 > area2) {
        printf("Jogador 1 venceu!\n");
    } else if (area1 < area2) { 
        printf("Jogador 2 venceu!\n");
    } else if (area1 = area2) {
        printf("Empate! \n");
    }
         if (PIB1 > PIB2) {
        printf("Jogador 1 venceu!\n");
    } else if (PIB1 < PIB2) { 
        printf("PJogador 2 venceu!\n");
    } else if (PIB1 = PIB2) {
        printf("Empate! \n");
    }
     if (NPT1 > NPT2) {
        printf("Jogador 1 venceu!\n");
    } else if (NPT1 < NPT2) { 
        printf("Jogador 2 venceu!\n");
    } else if (NPT1 = NPT2) {
        printf("Empate! \n");
    }
    if (DP1 > DP2) {
        printf("Jogador 1 venceu!\n");
    } else if (DP1 < DP2) { 
        printf("Jogador 2 venceu!\n");
    } else if (DP1 = DP2) {
        printf("Empate! \n");
    }
    if (PIBC1 > PIBC2) {
        printf("Jogador 1 venceu!\n");
    } else if (PIBC1 < PIBC2) { 
        printf("Jogador 2 venceu!\n");
    } else if (PIBC1 = PIBC2) {
        printf("Empate! \n");
    }
    if (poder1 > poder2) {
        printf("Jogador 1 venceu!\n");
    } else if (poder1 < poder2) { 
        printf("Jogador 2 venceu!\n");
    } else if (poder1 = poder2) {
        printf("Empate! \n");
    }



  

    return 0;
}

