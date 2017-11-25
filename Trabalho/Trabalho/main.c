/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 25 de Novembro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAMANHO 25

/*
 * 
 */
char nomeJogador(char *jogador){
    
    printf("Introduza o nome do jogador: ");
    lerString(jogador, TAMANHO);
    
    return 0;
}

int main(int argc, char** argv) {
    char jogador1[TAMANHO];
    char jogador2[TAMANHO];
    
    nomeJogador(jogador1);
    nomeJogador(jogador2);
       
    return (EXIT_SUCCESS);
}

