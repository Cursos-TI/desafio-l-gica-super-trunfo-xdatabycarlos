#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main (){

    // Variáveis para o menu de modos de jogo
    int opcao_modo;
    int opcao_principal_multiplayer;
    
    // Variáveis para os nomes dos jogadores
    char nome_jogador1[50];
    char nome_jogador2[50];

    // Variáveis da Carta 1
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

    // Inicializa a semente do gerador para não repetir os números
    srand(time(NULL));



    // 1. Etapa de Saudação e Explicação do Jogo
    printf("******** SUPER TRUNFO DE CIDADES ********\n\n");
    printf("Seja bem vindo ao Super Trunfo de Cidades!\n\n");
    printf("O objetivo desse jogo é comparar atributos de diferentes cidades para descobrir qual é a mais forte.\n\n");

    // 2. Menu Principal de Escolha dos Modos (Multiplayer ou Single_Player)
    printf("\n\nAgora, escolha como voce quer jogar:\n");
    printf("1. Jogar contra um amigo (2 Jogadores)\n");
    printf("2. Jogar contra o computador\n");

    printf("Digite o numero da sua escolha: ");
    scanf("%d", &opcao_modo);

    // Switch Principal Com base na escolha do modo
    switch (opcao_modo)
    {
    case 1: // 3. Opção Multiplayer 
        
        // Definição dos Nomes dos Jogadores
        printf("Ótimo! Insira o nome do Jogador 1: \n");
        scanf("%s", nome_jogador1);

        printf("Insira o nome do Jogador 2: \n");
        scanf("%s", nome_jogador2);

        printf("Sejam bem-vindos %s e %s, vamos explicar o fluxo do jogo: \n", nome_jogador1, nome_jogador2);

        // Explicação do Fluxo de Jogo
        printf("\nO jogo terá 5 etapas: \n");
        
        printf("1ª Cadastro dos atributos da carta do jogador 1.\n");
        printf("2ª Cadastro dos atributos da carta do jogador 2.\n");
        printf("3ª Sorteio para ver quem escolhe os atributos para batalha\n");
        printf("4ª O jogador vencedor escolhe os atributos para batalhar\n");
        printf("5ª A batalha acontece são exibidos os resultados\n\n");

        printf("1. Cada carta representa uma cidade.\n");
        printf("2. Cada cidade possui atributos:\n");
        printf("   - Área\n");
        printf("   - População\n");
        printf("   - PIB\n");
        printf("   - Pontos Turísticos\n");

        printf("Com base nesses serão calculados os seguintes: \n");
        printf("(O Super Poder é a soma de cada um dos atributos) \n");

        printf("   - Densidade Populacional\n");
        printf("   - PIB per capita\n");
        printf("   - Super Poder\n\n");

        // 3.1 Jogador 1 Começa a Preencher os seus dados de cidade
        printf("%s, você começa! Insira primeiro o nome da sua cidade: \n", nome_jogador1);
        scanf("%s", nome_cidade1);

        printf("Agora escolha uma letra de 'A-H' para reprentar o Estado da sua cidade: \n");
        scanf(" %c", &estado1);

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

        
        // Calcula a densidade populacional (populacao / area)
        densidade_populacional1 = populacao1 / area1;

        // Calcula o PIB per capita (PIB / populacao)
        pib_percapita1 = pib1 / populacao1;

        // Calcula o Super Poder
        superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1);

        printf("Muito bem %s, você preencheu todos os dados, veja abaixo como ficaram: \n", nome_jogador1);

        // 3.2 Exibe os dados preenchidos da primeira cidade
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

        // ----------------- Inicio do preenchimento da Carta 2 ---------------------

        // Declaração de Variáveis da Carta 2

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

        printf("### VEZ DO JOGADOR 2 ###\n");

        printf("%s, Agora é sua vez! Insira primeiro o nome da sua cidade: \n", nome_jogador2);
        scanf("%s", nome_cidade2);

        printf("Agora escolha uma letra de 'A-H' para reprentar o Estado da sua cidade: \n");
        scanf(" %c", &estado2);

        printf("Agora crie um codigo de 3 digitos para a cidade.\n");
        printf("Certifique-se de obedecer ao formato: Estado (A-H) + Número de 1 a 4.\n");
        printf("Exemplo: C01, onde C é estado e 01 é o codigo escolhido\n\n");
        printf("Digite o codigo escolhido abaixo: \n");
        scanf("%s", codigo_carta2);

        // Solicita a populacão da primeira cidade
        printf("\nAgora, digite a populacão da primeira cidade: \n");
        scanf("%lu", &populacao2);

        // Solicita a área da primeira cidade
        printf("\nDigite a área em km² da primeira cidade: \n");
        scanf("%lf", &area2);

        // Solicita o PIB da primeira cidade
        printf("\nDigite o PIB em R$ da primeira cidade: \n");
        scanf("%lf", &pib2);

        // Solicita o numero de pontos turísticos da primeira cidade
        printf("\nDigite a quantidade de pontos turísticos da primeira cidade: \n");
        scanf("%d", &pontos_turisticos2);

        

        // Calcula a densidade populacional (populacao / area)
        densidade_populacional2 = populacao2 / area2;

        // Calcula o PIB per capita (PIB / populacao)
        pib_percapita2 = pib2 / populacao2;

        // Calcula o Super Poder
        superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + (1 / densidade_populacional2);

        printf("Muito bem %s, você preencheu todos os dados, veja abaixo como ficaram: \n", nome_jogador2);

        // 3.3 Exibe os dados preenchidos da primeira cidade
        printf("\n-- Dados da Primeira Cidade ---\n\n");
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


        // É Criado um sorteio para decidir qual jogador vai escolher os atributos
        // Com o objetivo de não favorecer nenhum
        printf("\n ======== Sorteio para definir quem escolhe os atributos ======== \n");
        
        // Atribui a sorteio o do resto da divisão por 2 do número aleatório
        // Possiveis Resultados: 1 ou 0
        int sorteio = rand() % 2; 
        int resultado_sorteio; 

        if (sorteio == 1) { // Se 1, O jogador 1 Escolhe
            printf("A moeda caiu com a face para %s!\n", nome_jogador1);
            printf("%s, você escolhe os atributos!\n\n", nome_jogador1);
            resultado_sorteio = 1; // Para controle é atribuido 1 ao resultado_sorteio
        } else {// Se 0, o Jogador 2 Escolhe
            printf("A moeda caiu com a face para %s!\n", nome_jogador2);
            printf("%s, você escolhe os atributos!\n\n", nome_jogador2);
            resultado_sorteio = 2; 
        }

        // Declara as Variáveis de escolha de atributos
        int primeiro_atributo;
        int segundo_atributo;
        int terceiro_atributo;

        // Declara e Inicializa as Variáveis de 
        // A serem Usadas no placar final
        int placar_j1 = 0;
        int placar_j2 = 0;

        if (resultado_sorteio == 1) // Jogador 1 Escolhe
        {   // Exibe um menu de atributos para escolha
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o primeiro atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &primeiro_atributo);

            // Inicia a comparação de atributos com base na opção digitada
            switch (primeiro_atributo) {
                case 1:
                    if (area1 > area2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        placar_j1++; // Caso o atributo vença é somado 1 ponto no  1

                    } else if (area1 < area2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        placar_j2++; // Caso o atributo vença é somado 1 ponto no  1
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                    } // Caso dê empate é somado 0 ao placar
                    break;
                case 2:
                    if (populacao1 > populacao2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        placar_j1++;
                    } else if (populacao1 < populacao2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                    }
                    break;
                case 3:
                    if (pib1 > pib2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        placar_j1++;
                    } else if (pib1 < pib2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                    }
                    break;
                case 4:
                    if (pontos_turisticos1 > pontos_turisticos2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        placar_j1++;
                    } else if (pontos_turisticos1 < pontos_turisticos2) { 
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                    }
                    break;
                case 5:
                    if (densidade_populacional1 < densidade_populacional2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        placar_j1++;
                    } else if (densidade_populacional1 > densidade_populacional2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                    }
                    break;
                case 6:
                    if (pib_percapita1 > pib_percapita2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        placar_j1++;
                    } else if (pib_percapita1 < pib_percapita2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                    }
                    break;
                case 7:
                    if (superpoder1 > superpoder2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2);
                        placar_j1++;
                    } else if (superpoder1 < superpoder2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                    }
                    break;                
                default:
                    printf("Digite uma opção válida (1-7).\n");
                    break;
            }
            // 
            printf("\nAgora escolha o segundo atributo: \n");
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o segundo atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &segundo_atributo);

            if (segundo_atributo == primeiro_atributo)
            {
                printf("Você escolheu o mesmo atributo!\n");
            } else
            {
                switch (segundo_atributo) {
                    case 1:
                        if (area1 > area2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j1++;

                        } else if (area1 < area2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        }
                        break;
                    case 2:
                        if (populacao1 > populacao2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j1++;
                        } else if (populacao1 < populacao2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        }
                        break;
                    case 3:
                        if (pib1 > pib2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j1++;
                        } else if (pib1 < pib2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        }
                        break;
                    case 4:
                        if (pontos_turisticos1 > pontos_turisticos2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j1++;
                        } else if (pontos_turisticos1 < pontos_turisticos2) { 
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        }
                        break;
                    case 5:
                        if (densidade_populacional1 < densidade_populacional2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j1++;
                        } else if (densidade_populacional1 > densidade_populacional2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        }
                        break;
                    case 6:
                        if (pib_percapita1 > pib_percapita2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j1++;
                        } else if (pib_percapita1 < pib_percapita2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        }
                        break;
                    case 7:
                        if (superpoder1 > superpoder2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2);
                            placar_j1++;
                        } else if (superpoder1 < superpoder2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                        }
                        break;                
                    default:
                        printf("Digite uma opção válida (1-7).\n");
                        break;
                }
            }

            printf("\nAgora escolha o Terceiro atributo: \n");
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o terceiro atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &terceiro_atributo);

            if (terceiro_atributo == segundo_atributo || terceiro_atributo == primeiro_atributo)
            {
                printf("Você escolheu o mesmo atributo!\n");
            } else
            {
                switch (terceiro_atributo) {
                    case 1:
                        if (area1 > area2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j1++;

                        } else if (area1 < area2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        }
                        break;
                    case 2:
                        if (populacao1 > populacao2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j1++;
                        } else if (populacao1 < populacao2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        }
                        break;
                    case 3:
                        if (pib1 > pib2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j1++;
                        } else if (pib1 < pib2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        }
                        break;
                    case 4:
                        if (pontos_turisticos1 > pontos_turisticos2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j1++;
                        } else if (pontos_turisticos1 < pontos_turisticos2) { 
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        }
                        break;
                    case 5:
                        if (densidade_populacional1 < densidade_populacional2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j1++;
                        } else if (densidade_populacional1 > densidade_populacional2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        }
                        break;
                    case 6:
                        if (pib_percapita1 > pib_percapita2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j1++;
                        } else if (pib_percapita1 < pib_percapita2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        }
                        break;
                    case 7:
                        if (superpoder1 > superpoder2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2);
                            placar_j1++;
                        } else if (superpoder1 < superpoder2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                        }
                        break;                
                    default:
                        printf("Digite uma opção válida (1-7).\n");
                        break;
                }            
            }

            printf("\n\n---- PLACAR FINAL ----\n");
            printf("%s - (%s) %d X %d (%s) - %s\n", 
                  nome_jogador1, nome_cidade1, placar_j1, placar_j2, nome_cidade2, nome_jogador2);
            
            if (placar_j1 > placar_j2)
                printf("Parabéns, %s! Você Venceu!\n", nome_jogador1);
            else if (placar_j2 > placar_j1)
                printf("Parabéns, %s! Você Venceu!\n", nome_jogador2);
            else
                printf("Empate!\n");

            
            
        } else { //  Jogador 2 Escolhe
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o primeiro atributo que irá batalhar: ", nome_jogador2);
            scanf("%d", &primeiro_atributo);

            // Inicia a comparação de atributos com base na opção digitada
            switch (primeiro_atributo) {
                case 1:
                    if (area1 > area2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        placar_j1++;

                    } else if (area1 < area2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                    }
                    break;
                case 2:
                    if (populacao1 > populacao2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        placar_j1++;
                    } else if (populacao1 < populacao2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                    }
                    break;
                case 3:
                    if (pib1 > pib2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        placar_j1++;
                    } else if (pib1 < pib2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                    }
                    break;
                case 4:
                    if (pontos_turisticos1 > pontos_turisticos2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        placar_j1++;
                    } else if (pontos_turisticos1 < pontos_turisticos2) { 
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                    }
                    break;
                case 5:
                    if (densidade_populacional1 < densidade_populacional2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        placar_j1++;
                    } else if (densidade_populacional1 > densidade_populacional2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                    }
                    break;
                case 6:
                    if (pib_percapita1 > pib_percapita2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        placar_j1++;
                    } else if (pib_percapita1 < pib_percapita2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                    }
                    break;
                case 7:
                    if (superpoder1 > superpoder2) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2);
                        placar_j1++;
                    } else if (superpoder1 < superpoder2) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                        placar_j2++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                    }
                    break;                
                default:
                    printf("Digite uma opção válida (1-7).\n");
                    break;
            }

            printf("\nAgora escolha o segundo atributo: \n");
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o segundo atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &segundo_atributo);

            if (segundo_atributo == primeiro_atributo)
            {
                printf("Você escolheu o mesmo atributo!\n");
            } else
            {
                switch (segundo_atributo) {
                    case 1:
                        if (area1 > area2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j1++;

                        } else if (area1 < area2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        }
                        break;
                    case 2:
                        if (populacao1 > populacao2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j1++;
                        } else if (populacao1 < populacao2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        }
                        break;
                    case 3:
                        if (pib1 > pib2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j1++;
                        } else if (pib1 < pib2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        }
                        break;
                    case 4:
                        if (pontos_turisticos1 > pontos_turisticos2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j1++;
                        } else if (pontos_turisticos1 < pontos_turisticos2) { 
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        }
                        break;
                    case 5:
                        if (densidade_populacional1 < densidade_populacional2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j1++;
                        } else if (densidade_populacional1 > densidade_populacional2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        }
                        break;
                    case 6:
                        if (pib_percapita1 > pib_percapita2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j1++;
                        } else if (pib_percapita1 < pib_percapita2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        }
                        break;
                    case 7:
                        if (superpoder1 > superpoder2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2);
                            placar_j1++;
                        } else if (superpoder1 < superpoder2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                        }
                        break;                
                    default:
                        printf("Digite uma opção válida (1-7).\n");
                        break;
                }
            }

            printf("\nAgora escolha o Terceiro atributo: \n");
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o terceiro atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &terceiro_atributo);

            if (terceiro_atributo == segundo_atributo || terceiro_atributo == primeiro_atributo)
            {
                printf("Você escolheu o mesmo atributo!\n");
            } else
            {
                switch (terceiro_atributo) {
                    case 1:
                        if (area1 > area2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j1++;

                        } else if (area1 < area2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area2, nome_cidade2);
                        }
                        break;
                    case 2:
                        if (populacao1 > populacao2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j1++;
                        } else if (populacao1 < populacao2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao2, nome_cidade2);
                        }
                        break;
                    case 3:
                        if (pib1 > pib2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j1++;
                        } else if (pib1 < pib2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib2, nome_cidade2);
                        }
                        break;
                    case 4:
                        if (pontos_turisticos1 > pontos_turisticos2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j1++;
                        } else if (pontos_turisticos1 < pontos_turisticos2) { 
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2, nome_cidade2);
                        }
                        break;
                    case 5:
                        if (densidade_populacional1 < densidade_populacional2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j1++;
                        } else if (densidade_populacional1 > densidade_populacional2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional2, nome_cidade2);
                        }
                        break;
                    case 6:
                        if (pib_percapita1 > pib_percapita2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j1++;
                        } else if (pib_percapita1 < pib_percapita2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        }
                        break;
                    case 7:
                        if (superpoder1 > superpoder2) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2);
                            placar_j1++;
                        } else if (superpoder1 < superpoder2) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade2);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                            placar_j2++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder2, nome_cidade2); 
                        }
                        break;                
                    default:
                        printf("Digite uma opção válida (1-7).\n");
                        break;
                }            
            }

            // É Exibido o Placar Final armanezados nos placares previamente inicializados
            printf("\n\n---- PLACAR FINAL ----\n");
            printf("%s - (%s) %d X %d (%s) - %s\n", 
                  nome_jogador1, nome_cidade1, placar_j1, placar_j2, nome_cidade2, nome_jogador2);
            
            if (placar_j1 > placar_j2)
                printf("Parabéns, %s! Você Venceu!\n", nome_jogador1);
            else if (placar_j2 > placar_j1)
                printf("Parabéns, %s! Você Venceu!\n", nome_jogador2);
            else
                printf("Empate!\n");

        }         
        break;
    case 2: //4. Modo Single_Player vs PC (Sérgio Cardoso)
        
        printf("\nVocê irá enfrentar o Prof. Sergio Cardoso, Boa Sorte!\n");

        printf("Insira o seu nome: \n");
        scanf("%s", nome_jogador1);

        

       
        printf("Seja bem-vindo %s, vamos explicar o fluxo do jogo: \n", nome_jogador1);

        printf("\nO jogo terá 4 etapas: \n");
        
        printf("1ª Cadastro dos atributos da carta do jogador 1, (Você).\n");
        printf("2ª Exibição dos Atributos da Carta do Sergio Cardoso.\n");
        printf("3ª O jogador escolhe os atributos para batalhar\n");
        printf("4ª A batalha acontece e são exibidos os resultados\n\n");

        printf("1. Cada carta representa uma cidade.\n");
        printf("2. Cada cidade possui atributos:\n");
        printf("   - Área\n");
        printf("   - População\n");
        printf("   - PIB\n");
        printf("   - Pontos Turísticos\n");

        printf("Com base nesses serão calculados os seguintes: \n");
        printf("(O Super Poder é a soma de cada um dos atributos) \n");

        printf("   - Densidade Populacional\n");
        printf("   - PIB per capita\n");
        printf("   - Super Poder\n\n");

        printf("%s, você começa! Insira primeiro o nome da sua cidade: \n", nome_jogador1);
        scanf("%s", nome_cidade1);

        printf("Agora escolha uma letra de 'A-H' para reprentar o Estado da sua cidade: \n");
        scanf(" %c", &estado1);

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

        

        // Calcula a densidade populacional (populacao / area)
        densidade_populacional1 = populacao1 / area1;

        // Calcula o PIB per capita (PIB / populacao)
        pib_percapita1 = pib1 / populacao1;

        // Calcula o Super Poder
        superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1);

        printf("Muito bem %s, você preencheu todos os dados, veja abaixo como ficaram: \n", nome_jogador1);

        //  Exibe os dados preenchidos da primeira cidade
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

        // Declaração das Variáveis do PC
        char nome_pc[50] = "Sergio Cardoso"; 
        char estado_pc = 'X'; // Um caractere para o estado (A-H)
        char codigo_carta_pc[4] = "X99"; // Estado + 2 digitos
        char nome_cidade_pc[20] = "TechNova";
        unsigned long int populacao_pc;
        double area_pc;
        double pib_pc;
        int pontos_turisticos_pc;
        double densidade_populacional_pc;
        double pib_percapita_pc;
        double superpoder_pc;


        /*
        
        Lógica da geração de dados do PC:

        1) Para garantir uma maior aleatoriedade, utilizamos srand(time(0) * getpid()), 
       onde time(0) fornece o tempo atual e getpid() retorna o identificador único 
       do processo em execução.

        2) Para as variáveis de população, área, PIB e pontos turísticos, estabelecemos 
       uma variação percentual aleatória no intervalo de -50% até +50% do valor original.
            
        */

        // Para gerar os valores de atributos do Computador
        srand(time(0) * getpid());

        double diferenca_populacao; // Para diferença de percentual para população
        double diferenca_area; // Para diferença de percentual para população
        double diferenca_pib; // Para diferença de percentual para população
        double diferenca_pontos; // Para diferença de percentual para população

        // Estabelece o Atributo População do Computador
        diferenca_populacao = ((double)rand() / RAND_MAX) * 1.0 - 0.50;
        populacao_pc= populacao1 * (1.0 + diferenca_populacao);

        // Estabelece o Atributo Area do Computador
        diferenca_area = ((double)rand() / RAND_MAX) * 1.0 - 0.50;
        area_pc = area1 * (1.0 + diferenca_area);

        // Estabelece o Atributo PIB do Computador
        diferenca_pib = ((double)rand() / RAND_MAX) * 1.0 - 0.50;
        pib_pc = pib1 * (1.0 + diferenca_pib);

        // Estabelece o Atributo Pontos Turisticos do Computador
        diferenca_pontos = ((double)rand() / RAND_MAX) * 1.0 - 0.50;
        pontos_turisticos_pc = (int)(pontos_turisticos1 * (1.0 + diferenca_pontos));

        // População / Area
        densidade_populacional_pc = populacao_pc / area_pc;

        pib_percapita_pc = pib_pc / populacao_pc;

        superpoder_pc = populacao_pc + area_pc + pib_pc + pontos_turisticos_pc + pib_percapita_pc + (1 / densidade_populacional_pc);

        // 06. Exibe os dados preenchidos da segunda cidade
        printf("\n-- Dados do Computador ---\n\n");
        printf("Nome da Cidade: %s\n", nome_cidade_pc);
        printf("Codigo: %s\n", codigo_carta_pc);
        printf("Estado: %c\n", estado_pc);
        printf("Area em KM2: %.2f\n", area_pc);
        printf("Populacao: %lu\n", populacao_pc);
        printf("PIB em R$ : %.2f\n", pib_pc);
        printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_pc);
        // Exibe a Densidade Populacional e o PIB per capita
        printf("Densidade Populacional: %.2f\n", densidade_populacional_pc);
        printf("PIB per capita: %.2f\n", pib_percapita_pc);
        printf("Super Poder: %.2f\n\n", superpoder_pc);


            printf("Chegou a Hora de escolher 3 atributos para batalhar, veja eles: \n");

            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o primeiro atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &primeiro_atributo);

            placar_j1 = 0;
            int placar_pc = 0;

            // Inicia a comparação de atributos com base na opção digitada
            switch (primeiro_atributo) {
                case 1:
                    if (area1 > area_pc) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                        placar_j1++;

                    } else if (area1 < area_pc) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                        placar_pc++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                    }
                    break;
                case 2:
                    if (populacao1 > populacao_pc) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                        placar_j1++;
                    } else if (populacao1 < populacao_pc) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                        placar_pc++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                    }
                    break;
                case 3:
                    if (pib1 > pib_pc) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                        placar_j1++;
                    } else if (pib1 < pib_pc) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                        placar_pc++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                    }
                    break;
                case 4:
                    if (pontos_turisticos1 > pontos_turisticos_pc) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                        placar_j1++;
                    } else if (pontos_turisticos1 < pontos_turisticos_pc) { 
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                        placar_pc++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                    }
                    break;
                case 5:
                    if (densidade_populacional1 < densidade_populacional_pc) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                        placar_j1++;
                    } else if (densidade_populacional1 > densidade_populacional_pc) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                        placar_pc++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                    }
                    break;
                case 6:
                    if (pib_percapita1 > pib_percapita_pc) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                        placar_j1++;
                    } else if (pib_percapita1 < pib_percapita_pc) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita_pc, nome_cidade_pc);
                        placar_pc++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita_pc, nome_cidade_pc);
                    }
                    break;
                case 7:
                    if (superpoder1 > superpoder_pc) {
                        printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc);
                        placar_j1++;
                    } else if (superpoder1 < superpoder_pc) {
                        printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                        printf("-----------------### RESULTADO ###-------------\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc); 
                        placar_pc++;
                    } else {
                        printf("--- ### Houve um empate! ### ---\n");
                        printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc); 
                    }
                    break;                
                default:
                    printf("Digite uma opção válida (1-7).\n");
                    break;
            }

            printf("\nAgora escolha o segundo atributo: \n");
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o segundo atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &segundo_atributo);

            if (segundo_atributo == primeiro_atributo)
            {
                printf("Você escolheu o mesmo atributo!\n");
            } else
            {
                switch (segundo_atributo) {
                    case 1:
                        if (area1 > area_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                            placar_j1++;

                        } else if (area1 < area_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                        }
                        break;
                    case 2:
                        if (populacao1 > populacao_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (populacao1 < populacao_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                        }
                        break;
                    case 3:
                        if (pib1 > pib_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (pib1 < pib_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                        }
                        break;
                    case 4:
                        if (pontos_turisticos1 > pontos_turisticos_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (pontos_turisticos1 < pontos_turisticos_pc) { 
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                        }
                        break;
                    case 5:
                        if (densidade_populacional1 < densidade_populacional_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (densidade_populacional1 > densidade_populacional_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                        }
                        break;
                    case 6:
                        if (pib_percapita1 > pib_percapita_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j1++;
                        } else if (pib_percapita1 < pib_percapita_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita_pc, nome_cidade_pc);
                        }
                        break;
                    case 7:
                        if (superpoder1 > superpoder_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (superpoder1 < superpoder_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc); 
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc); 
                        }
                        break;                
                    default:
                        printf("Digite uma opção válida (1-7).\n");
                        break;
                }
            }

            printf("\nAgora escolha o Terceiro atributo: \n");
            printf("\n ---- MENU DE ATRIBUTOS ----\n");
            printf("1. Area em KM2\n");
            printf("2. Populacao\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super Poder\n");
            

            printf("\n%s, escolha o terceiro atributo que irá batalhar: ", nome_jogador1);
            scanf("%d", &terceiro_atributo);

            if (terceiro_atributo == segundo_atributo || terceiro_atributo == primeiro_atributo)
            {
                printf("Você escolheu o mesmo atributo!\n");
            } else
            {
                switch (terceiro_atributo) {
                    case 1:
                        if (area1 > area_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                            placar_j1++;

                        } else if (area1 < area_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Área: %s (%.2f) X (%.2f) %s\n", nome_cidade1, area1, area_pc, nome_cidade_pc);
                        }
                        break;
                    case 2:
                        if (populacao1 > populacao_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (populacao1 < populacao_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("População: %s (%lu) X (%lu) %s\n", nome_cidade1, populacao1, populacao_pc, nome_cidade_pc);
                        }
                        break;
                    case 3:
                        if (pib1 > pib_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (pib1 < pib_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib1, pib_pc, nome_cidade_pc);
                        }
                        break;
                    case 4:
                        if (pontos_turisticos1 > pontos_turisticos_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (pontos_turisticos1 < pontos_turisticos_pc) { 
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Pontos Turísticos: %s (%d) X (%d) %s\n", nome_cidade1, pontos_turisticos1, pontos_turisticos_pc, nome_cidade_pc);
                        }
                        break;
                    case 5:
                        if (densidade_populacional1 < densidade_populacional_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (densidade_populacional1 > densidade_populacional_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Densidade Populacional: %s (%.2f) X (%.2f) %s\n", nome_cidade1, densidade_populacional1, densidade_populacional_pc, nome_cidade_pc);
                        }
                        break;
                    case 6:
                        if (pib_percapita1 > pib_percapita_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita2, nome_cidade2);
                            placar_j1++;
                        } else if (pib_percapita1 < pib_percapita_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita_pc, nome_cidade_pc);
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("PIB per capita: %s (%.2f) X (%.2f) %s\n", nome_cidade1, pib_percapita1, pib_percapita_pc, nome_cidade_pc);
                        }
                        break;
                    case 7:
                        if (superpoder1 > superpoder_pc) {
                            printf("\n\n--- ## Carta 1 (%s) venceu! ## ---\n\n", nome_cidade1);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc);
                            placar_j1++;
                        } else if (superpoder1 < superpoder_pc) {
                            printf("\n\n--- ## Carta 2 (%s) venceu! ## ---\n\n", nome_cidade_pc);
                            printf("-----------------### RESULTADO ###-------------\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc); 
                            placar_pc++;
                        } else {
                            printf("--- ### Houve um empate! ### ---\n");
                            printf("Super Poder: %s (%.2f) X (%.2f) %s\n", nome_cidade1, superpoder1, superpoder_pc, nome_cidade_pc); 
                        }
                        break;                
                    default:
                        printf("Digite uma opção válida (1-7).\n");
                        break;
                }  
            }

            printf("\n\n---- PLACAR FINAL ----\n");
            printf("%s - (%s) %d X %d (%s) - %s\n", 
                  nome_jogador1, nome_cidade1, placar_j1, placar_pc, nome_cidade_pc, nome_pc);
            
            if (placar_j1 > placar_pc)
                printf("Parabéns, %s! Você Venceu!\n", nome_jogador1);
            else if (placar_pc > placar_j1)
                printf("Parabéns, %s! Você Venceu!\n", nome_pc);
            else
                printf("Empate!\n");


        break;
    
    default:
        printf("Digite uma Opção Válida!\n");
        break;
    }
    
}
