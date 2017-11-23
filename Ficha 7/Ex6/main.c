/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 23 de Novembro de 2017, 19:02
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/*
 * 
 */
int input(){
    int valor;
    
    while(1){
       printf("Introduza o tamanho da matriz: ");
       scanf("%d", &valor);
       
       if(valor>MAX){
           printf("Valor Invalido. ");
       }
       else{
           break;
       }
    } 
    
    return valor;
}

int main(int argc, char** argv) {
    int i,j,k;
    int linhas1, linhas2, colunas1, colunas2;
    
    printf("Matriz 1: \n");
    printf("Introduza as linhas primeiro.\n");
    linhas1=input();
    printf("Introduza as colunas agora.\n");
    colunas1=input();
    puts("");
    printf("Matriz 2: \n");
    printf("Introduza as linhas primeiro.\n");
    
    int matriz1[linhas1][colunas1];
    
    while(1){
        linhas2=input();
        if(linhas2==colunas1){
            break;
        }
        printf("Valor Invalido. ");
    }
    
    printf("Introduza as colunas agora.\n");
    colunas2=input();
    
    
    int matriz2[linhas2][colunas2];
    puts("");
    printf("Prrenceher Matriz 1: \n");
    for(i=0; i<linhas1; ++i){
        for(j=0; j<colunas1; ++j){
            printf("Posicao [%d] [%d] : ", i,j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    puts("");
    printf("Prrenceher Matriz 2: \n");
    for(i=0; i<linhas2; ++i){
        for(j=0; j<colunas2; ++j){
            printf("Posicao [%d] [%d] : ", i,j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    int matriz3[linhas1][colunas2];
    for (i=0;i<linhas1; ++i) {
        for (j=0; j<linhas1; ++j) {
            for (k=0; k<colunas2; ++k) {
                matriz3[i][j] = matriz3[i][j] + (matriz1[i][k] * matriz2[k][j]); 
            }
        }
    }
    
    return (EXIT_SUCCESS);
}

