#include <stdio.h>
#include <stdlib.h>
#include "jogada.h"

tJogada LeJogada(){
    tJogada jogada;
    jogada.x = -100000;
    jogada.y = -100000;
    printf("Digite uma posicao (x e y):\n");
    scanf("%d %d", &jogada.x, &jogada.y);
    if (jogada.x != -100000 && jogada.y != -100000)
    {
        jogada.sucesso = 1;
    }
    else{
        jogada.sucesso = 0;
    }
    return jogada;
}

int ObtemJogadaX(tJogada jogada){
    return jogada.x;
}

int ObtemJogadaY(tJogada jogada){
    return jogada.y;
}

int FoiJogadaBemSucedida(tJogada jogada){
    return jogada.sucesso;
}