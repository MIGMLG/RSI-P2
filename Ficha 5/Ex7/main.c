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
void arrayE(int A[], int B[], double E[]){
    int i, j, k, l, verificador1=0, verificador2=0, contador=0;
    
    for(i=0; i< TAMANHO; ++i){
        E[i]=0.5;
    }

    for(i=0; i< TAMANHO; ++i){
        for(j=0; j< TAMANHO; ++j){
            if(A[i]==B[j]){
                verificador1=0;
                for(k=j; k<TAMANHO; ++k){
                    if(A[i]==A[k]){
                        verificador1+=1;
                    }
                }
                verificador2=0;
                for(l=0; l<TAMANHO; ++l){
                    if(A[i]==E[l]){
                        verificador2+=1;
                    }
                }
                if(verificador2>0){
                    break;
                }
                
                 if(verificador1==1){
                    E[contador]=A[i];
                    contador+=1;
                }
            }
        }
    }    
}


int main(int argc, char** argv) {
    int A[TAMANHO];
    int B[TAMANHO];
    int C[TAMANHO];
    int D[TAMANHO];
    double E[TAMANHO];
    int i;
    
    arrayA(A);
    puts("-----------------------------------");
    arrayB(B);
    arrayC(A,B,C);
    arrayD(A,B,D);
    arrayE(A,B,E);
    
    for(i=0; i<TAMANHO; ++i){
        printf("Valor: %.2lf\n", E[i]);
    }
    
    return (EXIT_SUCCESS);
}

