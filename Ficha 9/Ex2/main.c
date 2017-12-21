/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 21, 2017, 12:00 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

int main(int argc, char** argv) {
    int *valores = NULL;
    valores = (int *) malloc(TAMANHO * sizeof(int *));
    
    printf("Introduza o primeiro valor a somar: ");
    scanf("%d", &valores[0]);
    
    printf("Introduza o primeiro valor a somar: ");
    scanf("%d", &valores[1]);

    valores[2] = valores[0] + valores[1];
    
    printf("Resultado: %d ", valores[2] );
    puts(" ");
    return (EXIT_SUCCESS);
}

