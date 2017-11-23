/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 23, 2017, 10:19 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 3

/*
 * 
 */
void maior(int matriz[][COLUNAS]){
    int i, j;
    int valor = matriz[0][0];
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            if(matriz[i][j]>valor){
                valor = matriz[i][j]; 
            }
        }
    }
    
    printf("O Maior Valor: %d\n", valor);
}

void menor(int matriz[][COLUNAS]){
    int i, j;
    int valor = matriz[0][0];
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            if(matriz[i][j]<valor){
                valor = matriz[i][j]; 
            }
        }
    }
    
    printf("O Maior Valor: %d\n", valor);
}

int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            printf("Introduza o valor [%d],[%d]: ",i ,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    maior(matriz);
    menor(matriz);
    
    return (EXIT_SUCCESS);
}

