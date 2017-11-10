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
void arrayA(int A[]){
    int i;
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza os valores do Array A: ");
        scanf("%d", &A[i]);
    }
}
void arrayB(int B[]){
    int i;
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza os valores do Array B: ");
        scanf("%d", &B[i]);
    }
}
void arrayC(int A[], int B[], int C[]){
    int i;
    for(i=0; i< TAMANHO; ++i){
        C[i]=A[i]+B[i];
    }
}

int main(int argc, char** argv) {
    int A[TAMANHO];
    int B[TAMANHO];
    int C[TAMANHO];
    
    arrayA(A);
    puts("");
    arrayB(B);
    puts("");
    arrayC(A,B,C);
    
    return (EXIT_SUCCESS);
}

