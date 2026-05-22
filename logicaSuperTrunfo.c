#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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

       // Variáveis carta 2
       char cidade2[50];
       int populacao2;
       int pontosturisticos2;
       float area2;
       float pib2;
       char codigo2[50];
       char estado2[50];
       float pibPerCapita2;
       float densidadePopulacional2;


    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:

    printf("===== SUPER TRUNFO =====\n\n");

       printf("Digite o codigo da carta: A01\n");
       scanf("%s", codigo1);

       printf("Digite o estado: Sao Paulo\n");
       scanf("%s", estado1);

       printf("Digite o nome da cidade:  Sao Paulo\n");
       scanf("%s", cidade1);

       printf("Digite a populacao da cidade: habitantes\n");
       scanf("%d", &populacao1);

       printf("Digite a area da cidade (km²) \n");
       scanf("%f", &area1);

       printf("Digite o numero de pontos turisticos: pontos\n");
       scanf("%d", &pontosturisticos1);

       printf("Digite o PIB da cidade: milhoes de reais\n");
       scanf("%f", &pib1);


       printf("Digite o codigo da carta: A02\n");
       scanf("%s", codigo2);

       printf("Digite o estado: MInas Gerais\n");
       scanf("%s", estado2);

       printf("Digite o nome da cidade:  Belo Horizonte \n");
       scanf("%s", cidade2);

       printf("Digite a populacao da cidade: habitantes\n");
       scanf("%d", &populacao2);

       printf("Digite a area da cidade (km²) \n");
       scanf("%f", &area2);

       printf("Digite o numero de pontos turisticos: pontos\n");
       scanf("%d", &pontosturisticos2);

       printf("Digite o PIB da cidade: milhoes de reais\n");
       scanf("%f", &pib2);



    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

       if(populacao1 > populacao2) {
        printf("Cidade 1 tem maior populacao que cidade 2\n"); 
    } else {
        printf("Cidade 2 tem maior populacao que cidade 1\n");
       }

       if(pontosturisticos1 > pontosturisticos2){
        printf("Cidade 1 tem mais pontos turisticos que cidade 2\n");
    } else{
        printf("Cidade 2  tem mais pontos turisticos que cidade 1\n");
       }

       if(pib1 > pib2){
        printf("pib cidade 1 e maior que pib cidade 2\n");
    } else{
        printf("pib cidade 2 e maior que pib cidade 1\n");
       }

       if(area1 > area2){
        printf("Area da cidade 1 e maior que area da cidade 2\n");
    }else{
        printf("Area da cidade 2 e maior que area da cidade 1\n");
       }

       if(pibPerCapita1 > pibPerCapita2){
        printf("PibPerCapita da cidade 1 e maior que PibPerCapita da cidade 2\n");
    }else{
        printf("PibPerCapita da cidade 2 e maior que PibPerCapita da cidade 1\n");
       }

       

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    if(area1 > area2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }

    printf("Fim do jogo. Obrigado por jogar Super Trunfo - Países!\n");

    return 0;
}
