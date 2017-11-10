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
int main(int argc, char** argv) {
    double valores[TAMANHO];
    int i;
    char opcao;
    
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza um valor: ");
        scanf("%lf", &valores[i]);
    }
    
    printf("Deseja verificar os numeros pares ou impares ? (P/I)");
    
    
    return (EXIT_SUCCESS);
}

