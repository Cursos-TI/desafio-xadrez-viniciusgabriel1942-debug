#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -------------------- TORRE (usando for) --------------------
    printf("Movimento da Torre:\n"); 
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------- BISPO (usando while) --------------------
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // -------------------- RAINHA (usando do-while) --------------------
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    // -------------------- CAVALO (usando for + while aninhado) --------------------
    printf("\nMovimento do Cavalo:\n");
    
    // 2 casas para baixo
    for (int m = 0; m < 2; m++) {
        printf("Baixo\n");
    }

    // 1 casa para a esquerda (com loop while dentro do for)
    int n = 0;
    while (n < 1) {
        printf("Esquerda\n");
        n++;
    }

    return 0;
}