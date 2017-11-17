/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 16 de Novembro de 2017, 22:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAMANHO 25

/*
 * 
 */
int main(int argc, char** argv) {
    char frase1[TAMANHO];
    int posicao, posicaofinal, i;
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);
    
    posicao = lastIndex(' ',frase1,TAMANHO);
    posicaofinal = strlen(frase1);
    
    printf("Nome: ");
    for(i=posicao; i< (posicaofinal); ++i){
        printf("%c", frase1[i]);
    }
    printf(" ");
    for(i=0; i< posicao; ++i){
        printf("%c", frase1[i]);
    }


    return (EXIT_SUCCESS);
}

