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

void arrayD(int A[], int B[], int D[]){
    int i,j, contador=0, contadorarray=0;
    for(i=0; i< TAMANHO; ++i){
        for(j=0; j< TAMANHO; ++j){
            if(A[i]==B[j]){
                break;
            }
            else{
                contador+=1;
            }
        }
        if(contador==10){
            D[contadorarray]=A[i];
            contadorarray+=1;
        }
        contador=0;
    }
}
void arrayE(int A[], int B[], int E[]){
    int i,j,k, contador=0, contadorarray=0;
    
    for(i=0; i< TAMANHO; ++i){
        for(j=0; j< TAMANHO; ++j){
            if(A[i]==B[j]){
                contador+=1;
            }
        }
        if(contador==1){
            E[contadorarray]=A[i];
            contadorarray+=1;
        }
        else{
            //implentar resto do codigo aqui XD
        }
        contador=0;
    }
    
}


int main(int argc, char** argv) {
    int A[TAMANHO];
    int B[TAMANHO];
    int C[TAMANHO];
    int D[TAMANHO];
    int E[TAMANHO];
    int i;
    
    arrayA(A);
    puts("------------------------------------------------------------------------");
    arrayB(B);
    arrayC(A,B,C);
    arrayD(A,B,D);
    arrayE(A,B,E);
    
    for(i=0; i<TAMANHO; ++i){
        printf("Array E: %d", E[i]);
    }
    
    return (EXIT_SUCCESS);
}

