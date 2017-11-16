/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 16, 2017, 11:55 AM
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
    char frase2[TAMANHO];
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);
    
    strcpy(frase2, frase1);
    
    printf("Frase 2: %s\n", frase2);

    return (EXIT_SUCCESS);
}

