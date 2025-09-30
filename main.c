#include <stdio.h>
#include <stdlib.h>

void mostrarRegras() {
    printf("\n=== Regras do Quiz ===\n");
    printf("1. O quiz possui 5 perguntas, cada uma com 3 alternativas (a, b ou c).\n");
    printf("2. Cada resposta correta vale 2 pontos.\n");
    printf("3. No final, sua pontuação total e um comentário serão mostrados.\n");
    printf("4. Você pode jogar quantas vezes quiser até escolher sair.\n\n");
}

int iniciarQuiz() {
    char resposta;
    int pontos = 0;

    printf("\n=== Iniciando o Quiz ===\n");

    // Pergunta 1
    printf("\n1) Qual é o maior planeta do Sistema Solar?\n");
    printf("a) Saturno\nb) Júpiter\nc) Marte\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);
    if (resposta == 'b' || resposta == 'B') pontos += 2;

    // Pergunta 2
    printf("\n2) Quem escreveu 'Dom Casmurro'?\n");
    printf("a) Machado de Assis\nb) José de Alencar\nc) Carlos Drummond de Andrade\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);
    if (resposta == 'a' || resposta == 'A') pontos += 2;

    // Pergunta 3
    printf("\n3) Qual é a fórmula química da água?\n");
    printf("a) CO2\nb) H2O\nc) O2\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);
    if (resposta == 'b' || resposta == 'B') pontos += 2;

    // Pergunta 4
    printf("\n4) Em qual continente fica a Argentina?\n");
    printf("a) América do Norte\nb) América do Sul\nc) Europa\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);
    if (resposta == 'b' || resposta == 'B') pontos += 2;

    // Pergunta 5
    printf("\n5) Qual destas cores não é primária?\n");
    printf("a) Azul\nb) Verde\nc) Vermelho\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);
    if (resposta == 'b' || resposta == 'B') pontos += 2;

    printf("\nSua pontuação foi: %d\n", pontos);

    // Comentário final
    if (pontos <= 4)
        printf("Precisa estudar mais!\n");
    else if (pontos <= 8)
        printf("Muito bem!\n");
    else
        printf("Excelente, parabéns!\n");

    return pontos;
}

int main() {
    int opcao;

    do {
        printf("\n=== Quiz Interativo ===\n");
        printf("1 - Iniciar Quiz\n");
        printf("2 - Ver Regras\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                iniciarQuiz();
                break;
            case 2:
                mostrarRegras();
                break;
            case 3:
                printf("Saindo do programa. Obrigado por jogar!\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 3);

    return 0;
}