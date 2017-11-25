/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 25 de Novembro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAMATRIZ 10
#define PECAS 2

/*
 * 
 */
void printMatriz(char matriz[][TAMATRIZ]){
    int i,j;
    //Imprime a Matriz
    for(i=0; i< TAMATRIZ; ++i){
        for(j=0; j< TAMATRIZ; ++j){
            printf("%c", matriz[i][j]);
        }
        puts(" ");
    }
    
}

void criarMatriz(char matriz[][TAMATRIZ]){
    int i, j;
    int abc =65;
    int nums =49;
    
    //Preenche a posição 0,0 com espaço em branco
    matriz[0][0]= ' ';
    
    //Prrenche a primeira linha com letras começando por A
    for(i=1; i<TAMATRIZ; ++i){
        matriz[0][i]=abc;
        abc+=1;
    }
    
    //Prrenche a primeira coluna com numeros começando por 1
    for(i=1; i<TAMATRIZ; ++i){
        matriz[i][0]=nums;
        nums+=1;
    }
    //Prenche o resto com - 
    for(i=1; i< TAMATRIZ; ++i){
        for(j=1; j< TAMATRIZ; ++j){
            matriz[i][j]='-';
        }
    }
    
}

void escolherTokens(char tokens[]){
    int i;
    
    //Premite a escolha dos tokens e guarda no array de chars
    for(i=0; i<PECAS; ++i){
        printf("Jogador %d escolha o seu token: ", i+1);
        scanf("%c", &tokens[i]);
        clean_buffer();
    }
    puts("");
    
}

int main(int argc, char** argv) {
    char tokens[PECAS];
    char matriz[TAMATRIZ][TAMATRIZ];
    
    escolherTokens(tokens);
    criarMatriz(matriz);
    printMatriz(matriz);
   
    return (EXIT_SUCCESS);
}

