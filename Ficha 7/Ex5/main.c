/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 23 de Novembro de 2017, 18:31
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
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            //printf("%d", transposta[i][j] );   
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
