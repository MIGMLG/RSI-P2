/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 16, 2017, 11:24 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include <string.h>
#define TAMANHO 25

/*
 * 
 */

int main(int argc, char** argv) {
    char frase1[TAMANHO];
    char letra;
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);
    
    printf("Escreva o caracter a procurar: ");
    scanf("%c", &letra);
    clean_buffer();
 
    countChar(frase1, letra);
    
    return (EXIT_SUCCESS);
}

