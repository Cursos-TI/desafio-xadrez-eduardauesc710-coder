#include <stdio.h>

int main() {
   
    int a = 0;

    // movimento da torre
    printf("MOVIMENTO DA TORRE\n");
    while (a<5){
        printf("Direita \n");
        a ++;
    }

    // movimento do bispo
    printf("MOVIMENTO DO BISPO \n");
    int b = 0;
    do{
        printf("Cima, direita \n");
        b++;
    } while (b < 5);

    // movimento da rainha
    printf("MOVIMENTO DA RAINHA \n");
    for (int c = 0; c < 8; c++){
        printf("Esquerda \n");
    }

    // movimento do cavalo
    printf("MOVIMENTO DO CAVALO \n");
    int i = 1;
    while (i == 1){
        for(int j = 1; j<=2; j++){
            printf("Baixo \n");
        }
        printf("Esquerda \n");
        i ++;
    }

    return 0;
}
