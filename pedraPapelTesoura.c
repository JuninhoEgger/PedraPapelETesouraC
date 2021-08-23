#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int jogador;
    int computador;
    printf("ESCOLHA: \n1(TESSOURA)\n2(PAPEL)\n3(PEDRA)\n");
    scanf("%d", &jogador);
    srand(time(NULL));// FUN��O QUE USA COMO BASE A HORA DO SISTEMA PARA GERAR UM N�MERO ALEAT�RIO
    computador = 1 + (rand()) % 3;

    printf("O COMPUTADOR JOGOU: %d\n", computador);
    if(jogador < 1 || jogador > 3){
        printf("JOGADA INVALIDA\n");
    }else{
        if(jogador==1 && computador==2){
            printf("VOCE VENCEU\n");
        } else if(jogador==1 && computador==2){
            printf("VOCE PERDEU\n");
        } else if(jogador==1 && computador==3){
            printf("VOCE PERDEU\n");
        } else if(jogador==2 && computador==1){
            printf("VOCE VENCEU \n");
        } else if(jogador==2 && computador==3){
            printf("VOCE PERDEU\n");
        } else if(jogador==3 && computador==2){
            printf("VOCE VENCEU\n");
        } else if(jogador==3 && computador==1){
            printf("VOCE VENCEU\n");
        }
    }
    printf("FIM DE JOGO...\n");
    return 0;
}
