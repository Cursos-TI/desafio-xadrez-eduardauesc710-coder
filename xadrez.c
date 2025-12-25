#include <stdio.h>

void moveTorre(int numero){
    if (numero > 0){
        printf("Direita \n");
        moveTorre(numero - 1);
    }
}

void moveRainha(int numero){
    if (numero > 0){
        printf("Direita \n");
        moveRainha(numero - 1);
    }
}

void moveBispo(int numero){
    if(numero >0){
        printf("Cima, direita \n");
        moveBispo(numero - 1);
    }

}

int main() {

    /* movimento da torre com while
    printf("MOVIMENTO DA TORRE\n");
    while (a<5){
        printf("Direita \n");
        a ++;
    } */
    
    // movimento da torre com rescursividade
    printf("MOVIMENTO DA TORRE\n");
    moveTorre(5);

    /*movimento da rainha com for 
    printf("MOVIMENTO DA RAINHA \n");
    for (int c = 0; c < 8; c++){
        printf("Esquerda \n");
    }*/ 
   
    // movimento da rainha com rescursividade
    printf("MOVIMENTO DA RAINHA \n");
    moveRainha(8);

     /* movimento do bispo com do while
    printf("MOVIMENTO DO BISPO \n");
    int b = 0;
    do{
        printf("Cima, direita \n");
        b++;
    } while (b < 5); */ 

    // movimento do bispo com loops aninhados

    printf("MOVIMENTO DO BISPO \n");
    int i = 1;
    while (i <= 5){
        printf("Cima \n");
        for(int j = 1; j<=1; j++){
            printf("Direita \n");
        }
        i ++;
    }

    // movimento do bispo com recursividade
    printf("MOVIMENTO Do BISPO \n");
    moveBispo(5);


    // movimento do cavalo com loops aninhados complexos
    printf("MOVIMENTO DO CAVALO \n");
    int a = 1;
    while (a == 1){
        for(int b = 1, a=1; b<=2 && a<=2; b++, a++){
            printf("Cima \n");
        }
        printf("Direita \n");
        a++;
    }
    
}
