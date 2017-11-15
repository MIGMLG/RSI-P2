/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 15 de Novembro de 2017, 17:28
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
/*
 * 
 */
int max(){
    int valor;
    
    while(1){
        printf("Introduza o Valor Max: ");
        scanf("%d", &valor);
        if(valor>MAX){
            printf("Valor Invalido. ");
            continue;
        }
        else{
            break;
        }
    }
    
    return valor;
}

void preencherArray(int array[], int max){
    int i;
    for(i=0; i<(max-1); ++i){
        array[i]=i+2;
    }
}

void resultado(int valor, int max, int array[]){
    int i, k;
    int j;
    
    for(i=0; i<(valor-1); ++i){
        if(array[i]>max){
            break;
        }
        else if(array[i]>0){
            for(j=2; j<=(valor/array[i]); ++j){
                for(k=0; k<=(valor-1); ++k){
                    if((array[i]*j)==array[k]){
                        array[k]=0;
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        else{ 
            continue;
        }
    }
  
}

void print(int valor, int array[]){
    int i;
    printf("Primos: ");
    for(i=0; i<(valor-1); ++i){
        if(array[i]>0){
            printf("%d, ", array[i]);
        }
    }
    
}

int main(int argc, char** argv) {
    int valor, valormax, array[MAX];
    
    
    int i;
    
    valor=max();
    valormax=sqrt(valor);
    preencherArray(array, valor);
    resultado(valor, valormax, array);
    print(valor, array);
    
    
    return (EXIT_SUCCESS);
}

