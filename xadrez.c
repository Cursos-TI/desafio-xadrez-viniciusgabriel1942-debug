#include <stdio.h>

// -------------------- FUNÇÕES RECURSIVAS --------------------

// Torre: movimento para a direita (recursivo)
void moverTorre(int casas) {
    if (casas <= 0) return;  
    printf("Direita\n");
    moverTorre(casas - 1);  
}

// Rainha: movimento para a esquerda (recursivo)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo: recursivo + loops aninhados
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0) return;

    // loop externo → movimento vertical
    for (int i = 0; i < casasVerticais; i++) {
        printf("Cima\n");

        // loop interno → movimento horizontal
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Direita\n");
        }
    }

    // chamada recursiva reduzindo 1 movimento vertical
    moverBispo(casasVerticais - 1, casasHorizontais);
}

// -------------------- CAVALO (loops complexos) --------------------
void moverCavalo() {
    // duas casas para cima + uma para direita
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            // no segundo movimento vertical, quebra para o movimento horizontal
            printf("Cima\n");
            for (int j = 0; j < movimentosHorizontais; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    continue; // segue para próxima iteração se tivesse mais movimentos
                }
                break; // como só tem 1, encerramos
            }
        } else {
            printf("Cima\n");
        }
    }
}

// -------------------- MAIN --------------------
int main() {
    // valores fixos para número de casas (entrada de dados definida no código)
    int casasTorre = 5;
    int casasBispoVerticais = 3;
    int casasBispoHorizontais = 2;
    int casasRainha = 4;

    // -------------------- TORRE --------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // -------------------- BISPO --------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVerticais, casasBispoHorizontais);

    // -------------------- RAINHA --------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // -------------------- CAVALO --------------------
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}