/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 10 de Novembro de 2017, 16:51
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"
#define TAMANHO 10

/*
 * 
 */
void pares(int valores[]){
    int i;
    printf("Numeros pares: ");
    for(i=0; i<TAMANHO; ++i){
        if( valores[i]%2==0){
            printf("%d,", valores[i]);
        }
    }
    
}
void impares(int valores[]){
    int i;
    printf("Numeros impares: ");
    for(i=0; i<TAMANHO; ++i){
        if( valores[i]%2>0){
            printf("%d,", valores[i]);
        }
    }
}

int main(int argc, char** argv) {
    int valores[TAMANHO];
    int i;
    char opcao;
    
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza um valor: ");
        scanf("%d", &valores[i]);
    }
    
    while(1){
        printf("Deseja verificar os numeros pares ou impares ? (P/I): ");
        limparBufferEntrada();
        scanf("%c", &opcao);
        limparBufferEntrada();
        
        if(opcao=='P' || opcao=='p'){
            pares(valores);
            break;
        }
        else if(opcao=='I' || opcao=='i'){
            impares(valores);
            break;
        }
        else{
            printf("Opcao Invalida. ");
        }
    }
    
    return (EXIT_SUCCESS);
}

