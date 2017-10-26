/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 16:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor1;
    int valor2;
    int resultado;
    
    printf("Introduza o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Introduza o segundo valor: ");
    scanf("%d", &valor2);
    resultado = valor1 - valor2;
    printf("Resultado: %d ", resultado*valor1 );

    return (EXIT_SUCCESS);
}

