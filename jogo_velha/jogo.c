#include <stdio.h>
#include <stdlib.h>

// Função para imprimir o tabuleiro do jogo da velha
void imprimirTabuleiro(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

// Função para verificar se um jogador ganhou
int verificarVitoria(char tabuleiro[3][3], char jogador) {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) return 1;
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) return 1;
    }
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) return 1;
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) return 1;
    return 0;
}

// Função principal
int main() {
    char tabuleiro[3][3];
    char jogador = 'X';
    int linha, coluna;
    int jogadas = 0;

    // Inicializa o tabuleiro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    // Loop do jogo
    while (1) {
        system("cls");  // Limpa a tela (funciona no Windows)

        printf("Jogo da Velha\n\n");
        imprimirTabuleiro(tabuleiro);

        // Verifica se houve um empate
        if (jogadas == 9) {
            printf("Empate!\n");
            break;
        }

        // Solicita a jogada do jogador
        printf("Jogador %c, informe a linha (0, 1 ou 2) e a coluna (0, 1 ou 2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        // Verifica se a jogada é válida
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida! Tente novamente.\n");
            continue;
        }

        // Realiza a jogada
        tabuleiro[linha][coluna] = jogador;
        jogadas++;

        // Verifica se o jogador venceu
        if (verificarVitoria(tabuleiro, jogador)) {
            system("cls");
            printf("Jogo da Velha\n\n");
            imprimirTabuleiro(tabuleiro);
            printf("Jogador %c venceu!\n", jogador);
            break;
        }

        // Alterna o jogador
        if (jogador == 'X') jogador = 'O';
        else jogador = 'X';
    }

    return 0;
}
