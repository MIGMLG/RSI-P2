/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 20 de Outubro de 2017, 15:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor1, valor2;
    
    printf("Introduza o primeiro Valor: ");
    scanf("%d", &valor1);

    printf("Introduza o segundo Valor: ");
    scanf("%d", &valor2);
    
    if( valor1 > valor2) {
        printf("Valor Maior: %d", valor1);
    }
    else if (valor2 > valor1){
        printf("Valor Maior: %d", valor2);
    }
    else{
        printf("Os dois valores são iguais: %d\n", valor1);
    }
    
    return (EXIT_SUCCESS);
}

