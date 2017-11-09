/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 9 de Novembro de 2017, 9:54
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

/*
 * 
 */
int main(int argc, char** argv) {
    double valores[TAMANHO], valor, soma;
    int i, contador =0;
    
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza um valor: ");
        scanf("%lf", &valor);
        if(valor==-1){
            break;
        }
        else {
            valores[i]=valor;
            contador+=1;
        }
    }
    printf("A leitura de valores acabou.");
    
    for(i=0; i<TAMANHO; ++i){
        soma+= valores[i];
    }
    
    printf("\nMedia: %.2lf", soma/contador);
    
    return (EXIT_SUCCESS);
}

