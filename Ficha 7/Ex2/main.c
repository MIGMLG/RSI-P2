/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 23, 2017, 12:00 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 4
#define COLUNAS 5

/*
 * 
 */
void procura(int matriz[][COLUNAS]){
    int valor;
    int i, j;
    int contador =0;
    
    printf("Introduza o valor que pretende procura: ");
    scanf("%d", &valor);
    
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            if(matriz[i][j]==valor){
                contador++;
            }
        }
    }
    
    printf("Existem %d numeros \"%d\".", contador, valor);
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
    
    procura(matriz);
    
    return (EXIT_SUCCESS);
}

