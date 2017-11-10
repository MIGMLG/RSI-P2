/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 10 de Novembro de 2017, 17:32
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

/*
 * 
 */
int main(int argc, char** argv) {
    int A[TAMANHO];
    int B[TAMANHO];
    int i;
    
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza os  valores do Array A: ");
        scanf("%d", &A[i]);
    }
    
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza os  valores do Array B: ");
        scanf("%d", &B[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

