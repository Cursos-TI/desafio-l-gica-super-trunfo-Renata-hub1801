#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    int escolha1, escolha2;
    int vencedor = 0;
    int pontosCarta1 = 0;
    int pontosCarta2 = 0;


    srand((unsigned int) time(0));

    // Definição das variáveis para armazenar as propriedades das cidades
    char cidade1[50];
    int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    char codigo1[50];
    char estado1[50];
    float pibPerCapita1;
    float densidadePopulacional1;

    char cidade2[50];
    int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    char codigo2[50];
    char estado2[50];
    float pibPerCapita2;
    float densidadePopulacional2;

    printf("*** Jogo SuperTrunfo ***\n");
    printf("Escolha uma opcao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. PibPerCapita\n");
    printf("6. Densidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);
    
   
    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Populacao\n");
            break;
        case 2:
            printf("Jogador: Area\n");
            break;
        case 3:
            printf("Jogador: PIB\n");
            break;
        case 4:
            printf("Jogador: Pontos Turisticos\n");
            break;
        case 5:
            printf("Jogador: PIB per capita\n");
            break;
        case 6:
            printf("Jogador: Densidade Populacional\n");
            break;
        default:
            return 1;
    }

    escolhaComputador = rand() % 6 + 1;

    switch (escolhaComputador) {
        case 1:
            printf("Computador escolheu: Populacao\n");
            break;
        case 2:
            printf("Computador escolheu: Area\n");
            break;
        case 3:
            printf("Computador escolheu: PIB\n");
            break;
        case 4:
            printf("Computador escolheu: Pontos Turisticos\n");
            break;
        case 5:
            printf("Computador escolheu: PIB per capita\n");
            break;
        case 6:
            printf("Computador escolheu: Densidade Populacional\n");
            break;
        default:
            printf("Opcao invalida para o computador\n");
            return 1;
             
    }

         printf("Escolha o PRIMEIRO atributo: ");
            scanf("%d", &escolha1);

            printf("Escolha o SEGUNDO atributo: ");
            scanf("%d", &escolha2);
            escolhaComputador = rand() % 6 + 1;



    printf("===== SUPER TRUNFO =====\n\n");

    printf("Digite o codigo da carta 1: ");
    scanf(" %49[^\n]", codigo1);
    printf("Digite o estado da carta 1: ");
    scanf(" %49[^\n]", estado1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %49[^\n]", cidade1);
    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade 1 (km²): ");
    scanf("%f", &area1);
    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosturisticos1);
    printf("Digite o PIB da cidade 1 (milhoes): ");
    scanf("%f", &pib1);
    printf("Digite o PIB per capita da cidade 1: ");
    scanf("%f", &pibPerCapita1);
    printf("Digite a densidade populacional da cidade 1: ");
    scanf("%f", &densidadePopulacional1);

    printf("\n### Carta 2 ###\n");
    printf("Digite o codigo da carta 2: ");
    scanf(" %49[^\n]", codigo2);
    printf("Digite o estado da carta 2: ");
    scanf(" %49[^\n]", estado2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %49[^\n]", cidade2);
    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade 2 (km²): ");
    scanf("%f", &area2);
    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontosturisticos2);
    printf("Digite o PIB da cidade 2 (milhoes): ");
    scanf("%f", &pib2);
    printf("Digite o PIB per capita da cidade 2: ");
    scanf("%f", &pibPerCapita2);
    printf("Digite a densidade populacional da cidade 2: ");
    scanf("%f", &densidadePopulacional2);

    printf("\n=== Comparacoes Gerais ===\n");
    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior populacao que cidade 2\n");
    } else if (populacao1 < populacao2) {
        printf("Cidade 2 tem maior populacao que cidade 1\n");
    } else {
        printf("As duas cidades tem igual populacao\n");
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf("Cidade 1 tem mais pontos turisticos que cidade 2\n");
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("Cidade 2 tem mais pontos turisticos que cidade 1\n");
    } else {
        printf("As duas cidades tem igual numero de pontos turisticos\n");
    }

    if (pib1 > pib2) {
        printf("PIB da cidade 1 e maior que o da cidade 2\n");
    } else if (pib1 < pib2) {
        printf("PIB da cidade 2 e maior que o da cidade 1\n");
    } else {
        printf("As duas cidades tem igual PIB\n");
    }

    if (area1 > area2) {
        printf("Area da cidade 1 e maior que a da cidade 2\n");
    } else if (area1 < area2) {
        printf("Area da cidade 2 e maior que a da cidade 1\n");
    } else {
        printf("As duas cidades tem igual area\n");
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per capita da cidade 1 e maior que o da cidade 2\n");
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("PIB per capita da cidade 2 e maior que o da cidade 1\n");
    } else {
        printf("As duas cidades tem igual PIB per capita\n");
    }

    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Cidade 1 tem menor densidade populacional que a cidade 2\n");
    } else if (densidadePopulacional1 > densidadePopulacional2) {
        printf("Cidade 2 tem menor densidade populacional que a cidade 1\n");
    } else {
        printf("As duas cidades tem igual densidade populacional\n");
    }

       if(populacao1 > populacao2)
             pontosCarta1++;
      else if(populacao1 < populacao2)
             pontosCarta2++;

        if(area1 > area2)
            pontosCarta1++;
      else if(area1 < area2)
             pontosCarta2++;


    printf("\n=== Resultado da escolha do jogador ===\n");
    switch (escolhaJogador) {
        case 1:
            if (populacao1 > populacao2) vencedor = 1;
            else if (populacao1 < populacao2) vencedor = 2;
            break;
        case 2:
            if (area1 > area2) vencedor = 1;
            else if (area1 < area2) vencedor = 2;
            break;
        case 3:
            if (pib1 > pib2) vencedor = 1;
            else if (pib1 < pib2) vencedor = 2;
            break;
        case 4:
            if (pontosturisticos1 > pontosturisticos2) vencedor = 1;
            else if (pontosturisticos1 < pontosturisticos2) vencedor = 2;
            break;
        case 5:
            if (pibPerCapita1 > pibPerCapita2) vencedor = 1;
            else if (pibPerCapita1 < pibPerCapita2) vencedor = 2;
            break;
        case 6:
            if (densidadePopulacional1 < densidadePopulacional2) vencedor = 1;
            else if (densidadePopulacional1 > densidadePopulacional2) vencedor = 2;
            break;
    }

    if (vencedor == 1) {
        printf("Carta 1 venceu! (%s)\n", cidade1);
    } else if (vencedor == 2) {
        printf("Carta 2 venceu! (%s)\n", cidade2);
    } else {
        printf("Empate! As duas cartas tem valores iguais para a escolha atual.\n");
    }
    
    printf("\nPontos da Carta 1: %d\n", pontosCarta1);
    printf("Pontos da Carta 2: %d\n", pontosCarta2);

if(pontosCarta1 > pontosCarta2)
    printf("Carta 1 venceu no modo mestre!\n");

else if(pontosCarta2 > pontosCarta1)
    printf("Carta 2 venceu no modo mestre!\n");

else
    printf("Empate no modo mestre!\n");

    printf("Fim do jogo. Obrigado por jogar Super Trunfo - Paises!\n");
    return 0;
}
