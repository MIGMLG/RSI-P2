/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 2 de Novembro de 2017, 19:21
 */

#include <stdio.h>
#include <stdlib.h>

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
void escrever(int valor) {
    int i;
    for (i=0; i<valor; ++i) {
        printf("*");
    }
}
int main(int argc, char** argv) {
    int valor;
    int min = 1;
    int max = 100;
    
    valor = lerInteiro(min, max);
    escrever(valor);

    return (EXIT_SUCCESS);
}