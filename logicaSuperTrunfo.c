#include <stdio.h>

int main() {

    // ------------------- Carta 01 -------------------

    
    char nome_jogador[20]; 
    char estado1; // Um caractere para o estado (A-H)
    char codigo_carta1[4]; // Estado + 2 digitos
    char nome_cidade1[20];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int pontos_turisticos1;
    double densidade_populacional1;
    double pib_percapita1;
    double superpoder1;

    // 01. Saudação e Introdução ao Jogo

    printf("******** SUPER TRUNFO DE CIDADES ********\n\n");
    printf("Seja bem vindo ao Super Trunfo de Cidades!\n\n");
    printf("O objetivo desse jogo é comparar atributos de diferentes cidades para descobrir qual é a mais forte.\n\n");

    printf("Primeiro, me diga, como voce se chama?\n");
    scanf("%s", nome_jogador);

    printf("\n%s, a partir de agora voce ira digitar os dados da primeira cidade.\n\n", nome_jogador);

    // 02. Início do preenchimento dos dados da primeira carta.

    // Solicita o estado da primeira cidade
    printf("Em qual estado (A-H) fica a primeira cidade? (Digite apenas a letra)\n");
    scanf(" %c", &estado1);

    // Solicita a criação de um codigo para a primeira cidade
    printf("Agora crie um codigo de 3 digitos para a cidade.\n");
    printf("Certifique-se de obedecer ao formato: Estado (A-H) + Número de 1 a 4.\n");
    printf("Exemplo: C01, onde C é estado e 01 é o codigo escolhido\n\n");
    printf("Digite o codigo escolhido abaixo: \n");
    scanf("%s", codigo_carta1);

    // Solicita a populacão da primeira cidade
    printf("\nAgora, digite a populacão da primeira cidade: \n");
    scanf("%lu", &populacao1);

    // Solicita a área da primeira cidade
    printf("\nDigite a área em km² da primeira cidade: \n");
    scanf("%lf", &area1);

    // Solicita o PIB da primeira cidade
    printf("\nDigite o PIB em R$ da primeira cidade: \n");
    scanf("%lf", &pib1);

    // Solicita o numero de pontos turísticos da primeira cidade
    printf("\nDigite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Para finalizar, solicita o nome da primeira cidade
    printf("\nAgora por ultimo, digite o nome da primeira cidade: \n");
    scanf("%s", nome_cidade1);

    // Calcula a densidade populacional (populacao / area)
    densidade_populacional1 = populacao1 / area1;

    // Calcula o PIB per capita (PIB / populacao)
    pib_percapita1 = pib1 / populacao1;

    // Calcula o Super Poder
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1);

    // 03. Exibe os dados preenchidos da primeira cidade
    printf("\n-- Dados da Primeira Cidade ---\n\n");
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Estado: %c\n", estado1);
    printf("Area em KM2: %.2f\n", area1);
    printf("Populacao: %lu\n", populacao1);
    printf("PIB em R$ : %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    // Exibe a Densidade Populacional e o PIB per capita
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_percapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);


    // ------------------- Carta 02 -------------------

    // Declara as variaveis usadas para a segunda cidade
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[20];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int pontos_turisticos2;
    double densidade_populacional2;
    double pib_percapita2;
    double superpoder2;

    printf("\nMuito bem, %s! a partir de agora voce irá digitar os dados da segunda cidade.\n\n", nome_jogador);

    // Solicita o estado da segunda cidade
    printf("\nEm qual estado (A-H) fica a segunda cidade? (Digite apenas a letra)\n");
    scanf(" %c", &estado2);

    // Solicita a criacao de um código para a segunda cidade
    printf("Agora crie um código de 3 digitos para a cidade.\n");
    printf("Certifique-se de obedecer ao formato: Estado (A-H) + Numero de 1 a 4.\n");
    printf("Exemplo: C01, onde C é estado e 01 é o codigo escolhido\n\n");
    printf("Digite o código escolhido abaixo: \n");
    scanf("%s", codigo_carta2);

    // Solicita a população da segunda cidade
    printf("\nAgora, digite a população da segunda cidade: \n");
    scanf("%lu", &populacao2);

    // Solicita a área da segunda cidade
    printf("\nDigite a área em km² da segunda cidade: \n");
    scanf("%lf", &area2);

    // Solicita o PIB da segunda cidade
    printf("\nDigite o PIB em R$ da segunda cidade: \n");
    scanf("%lf", &pib2);

    // Solicita o numero de pontos turísticos da segunda cidade
    printf("\nDigite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Para finalizar, solicita o nome da segunda cidade
    printf("\nAgora por ultimo, digite o nome da segunda cidade: \n\n");
    scanf("%s", nome_cidade2);

    // Calcula a densidade populacional (populacao / area)
    densidade_populacional2 = populacao2 / area2;

    // Calcula o PIB per capita (PIB / populacao)
    pib_percapita2 = pib2 / populacao2;

    // Calcula o Super Poder
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + (1 / densidade_populacional2);


    // 06. Exibe os dados preenchidos da segunda cidade
    printf("\n-- Dados da Segunda Cidade ---\n\n");
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Estado: %c\n", estado2);
    printf("Area em KM2: %.2f\n", area2);
    printf("Populacao: %lu\n", populacao2);
    printf("PIB em R$ : %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    // Exibe a Densidade Populacional e o PIB per capita
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_percapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    // Inicia a Fase de batalhas
    printf("\n ---- Inicio da Batalha de Cartas ----\n");

    // Declara as variaveis de Opção
    int opcao_principal; // Menu Principal
    int opcao_jogo;  // Sub-Menu de Jogo

printf("\n ---- MENU PRINCIPAL ----\n");
    printf("1. Escolher Atributos\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");

    printf("Escolha: ");
    scanf("%d", &opcao_principal);

    // Inicia o Switch para o menu principal
    switch (opcao_principal) { 
        case 1: // Se for Opção 1 ativa o menu de atributos
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            printf("8. Sair\n");

            printf("Escolha atributo que irá batalhar: ");
            scanf("%d", &opcao_jogo);

            // Inicia a comparação de atributos com base na opção digitada
            switch (opcao_jogo) {
                case 1:
                    if (area1 > area2) {
                        printf("--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                    } else if (area1 < area2) {
                        printf("--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                    }
                    break;
                case 2:
                    if (populacao1 > populacao2) {
                        printf("--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%.2f) X (%.2f) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                    } else if (populacao1 < populacao2) {
                        printf("--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%.2f) X (%.2f) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("População: %s (%.2f) X (%.2f) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                    }
                    break;
                case 3:
                    if (pib1 > pib2) {
                        printf("--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                    } else if (pib1 < pib2) {
                        printf("--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                    }
                    break;
                case 4:
                    if (pontos_turisticos1 > pontos_turisticos2) {
                        printf("--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                    } else if (pontos_turisticos1 < pontos_turisticos2) { 
                        printf("--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                    }
                    break;
                case 5:
                    if (densidade_populacional1 < densidade_populacional2) {
                        printf("--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                    } else if (densidade_populacional1 > densidade_populacional2) {
                        printf("--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                    }
                    break;
                case 6:
                    if (pib_percapita1 > pib_percapita2) {
                        printf("--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                    } else if (pib_percapita1 < pib_percapita2) {
                        printf("--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                    }
                    break;
                case 7:
                    if (superpoder1 > superpoder2) {
                        printf("--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2);  
                    } else if (superpoder1 < superpoder2) {
                        printf("--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                    }
                    break;
                case 8:
                    printf("------ Saindo... ------\n");
                    break;
                default:
                    printf("Digite uma opção válida (1-8).\n");
                    break;
            }
            break;

        case 2: // Exibe as regras do jogo
            printf("------------ ### REGRAS DO JOGO ### ------------\n\n");
            printf("1. Cada carta representa uma cidade.\n");
            printf("2. Cada cidade possui atributos:\n");
            printf("   - Área\n");
            printf("   - População\n");
            printf("   - PIB\n");
            printf("   - Pontos Turísticos\n");
            printf("   - Densidade Populacional\n");
            printf("   - PIB per capita\n");
            printf("   - Super Poder\n\n");
            printf("3. O jogador escolhe um atributo para comparar.\n");
            printf("4. A carta com o valor mais vantajoso vence:\n");
            printf("   - Área, População, PIB, Pontos Turísticos, PIB per capita e Super Poder: vence o MAIOR.\n");
            printf("   - Densidade Populacional: vence o MENOR.\n\n");
            printf("5. Caso os valores sejam iguais, o resultado é um EMPATE.\n");
            printf("------------------------------------------------\n\n");
            break;

        case 3:
            printf("------ Saindo... ------\n");
            break;

        default:
            printf("Digite uma opção válida (1-3).\n");
            break;
    }



    return 0;
}
