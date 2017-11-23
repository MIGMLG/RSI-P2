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
    int linhas1, linhas2, colunas1, colunas2;
    
    printf("Matriz 1: \n");
    printf("Introduza as linhas primeiro.\n");
    linhas1=input();
    printf("Introduza as colunas agora.\n");
    colunas1=input();
    
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
    
    while(1){
        colunas2=input();
        if(colunas2==linhas1){
            break;
        }
        printf("Valor Invalido. ");
    }
    
    int matriz2[linhas2][colunas2];

  
    
    printf("Ola");
    return (EXIT_SUCCESS);
}

