/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 2 de Novembro de 2017, 12:28
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"
/*
 * 
 */

void desenhar(char letra, int colunas, int linhas){
    int i, j;
    for (i=1; i<=colunas; ++i) {
        for(j=1; j<= linhas; ++j){
            if (i> 1 & i<colunas & j>1 & j<linhas){
                printf(" ");
                continue;
            }
            else {
                printf("%c", letra);
            }
        }
        puts("");
    }
}

int main(int argc, char** argv) {
    char letra;
    int colunas, linhas;
    
    printf("Introduza a letra: ");
    scanf("%c", &letra);
    limparBufferEntrada();
    
    printf("Introduza o nr de colunas: ");
    scanf("%d", &colunas);
    
    printf("Introduza o nr de linhas: ");
    scanf("%d", &linhas);

    desenhar(letra, colunas, linhas);
    
    return (EXIT_SUCCESS);
}

