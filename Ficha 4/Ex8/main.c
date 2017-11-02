/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 2 de Novembro de 2017, 20:00
 */

#include <stdio.h>
#include <stdlib.h>
#define alunos 10
/*
 * 
 */
int lerInteiro(int min, int max){
    int valor;
    while(1){
        printf("Introduza um valor: ");
        scanf("%d", &valor);
        if ( valor>= min & valor<=max ) {
            break;
        }
        else {
            printf("Valor Invalido. ");
        }
    }
    return valor;
}

int main(int argc, char** argv) {
    int nota[alunos];
    int min = 0;
    int max = 20;
    int i;
    
    for (i=0; i<alunos; ++i){
        nota[i] = lerInteiro(min, max);
    }
    
    return (EXIT_SUCCESS);
}

