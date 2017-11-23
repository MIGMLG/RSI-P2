/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: LELAGE
 *
 * Created on 22 de Novembro de 2017, 10:07
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 2
#define COLUNAS 2

/*
 * 
 */
void print(int matriz[][COLUNAS]){
    int i, j;
    int transposta[LINHAS][COLUNAS];
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            transposta[j][i]= matriz[i][j];
        }
    }
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            printf("%d", transposta[i][j] );   
        }
        puts("");
    } 
}

int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    
    int i, j;
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            printf("Introduza um valor: ");
            scanf("%d", &matriz[i][j]);   
        }
    }
    
    print(matriz);
    
    return (EXIT_SUCCESS);
}

