/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 21 de Outubro de 2017, 16:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor;
    double resto;
    
    printf("Introduza um numero: ");
    scanf("%d", &valor);
    
    resto= valor % 3;
    
    if( resto>0 ) {
        printf("O numero %d não é divisel por 3.\n", valor);
    }
    else {
        printf("O numero %d é divisel por 3.\n", valor);
    }
    
    resto= valor % 5;
    
    if( resto>0 ) {
        printf("O numero %d não é divisel por 5.", valor);
    }
    else {
        printf("O numero %d é divisel por 5.", valor);
    }

    return (EXIT_SUCCESS);
}

