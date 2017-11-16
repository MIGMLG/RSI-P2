/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 16, 2017, 11:24 AM
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
    char frase[TAMANHO];
    
    printf("Escreva algo: ");
    
    lerString(frase, TAMANHO);
    
    printf("Frase: %s", frase);

    return (EXIT_SUCCESS);
}

