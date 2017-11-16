/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 16, 2017, 12:02 PM
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
    int comprimento;
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);
    
    comprimento=strlen(frase1);
    
    printf("Comprimento: %d", comprimento);
    
    return (EXIT_SUCCESS);
}

