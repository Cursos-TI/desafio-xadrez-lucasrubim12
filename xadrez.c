#include <stdio.h>


void moverBispo() {
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    for(int i = 1; i <= 5; i++) {
        printf("Bispo moveu para (%d, %d)\n", i, i);  
        // x aumenta e y aumenta (diagonal direita)
    }
}


void moverTorre() {
    printf("\nMovimento da Torre (5 casas para a direita):\n");
    for(int i = 1; i <= 5; i++) {
        printf("Torre moveu para (%d, 0)\n", i);  
        // apenas x aumenta
    }
}


void moverRainha() {
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    for(int i = 1; i <= 8; i++) {
        printf("Rainha moveu para (%d, 0)\n", -i);  
        // apenas x diminui
    }
}

int main() {
    moverBispo();
    moverTorre();
    moverRainha();
    return 0;
}