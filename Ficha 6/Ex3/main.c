/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 16, 2017, 11:42 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAMANHO 25
/*
 * 
 */
int main(int argc, char** argv) {
    char frase1[TAMANHO];
    char frase2[TAMANHO];
    int ordem;
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);
    printf("Escreva algo: ");
    lerString(frase2, TAMANHO);
    
    ordem=strcmp(frase1, frase2);
    
    
    if(ordem < 0){
        printf("Frase: %s\n", frase1);
        printf("Frase: %s\n", frase2);
    }
    else{
        printf("Frase: %s\n", frase2);
        printf("Frase: %s\n", frase1);
    }
    
    return (EXIT_SUCCESS);
}

