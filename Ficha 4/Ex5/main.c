/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 2 de Novembro de 2017, 12:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void factorial(int valor){
    int i;
    int resultado=1;
    
    for(i=1; i<= valor; ++i){
        resultado= resultado *i;
    }
    printf("Resultado: %d", resultado);
}

int main(int argc, char** argv) {
    int valor;
    
    printf("Introduza um valor: ");
    scanf("%d", &valor);
    
    factorial(valor);
    
    return (EXIT_SUCCESS);
}

