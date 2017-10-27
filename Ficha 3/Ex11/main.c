/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 26 de Outubro de 2017, 12:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor;
    int i = 1;
    int contador=0;
    
    printf("Introduza um valor: ");
    scanf("%d", &valor);
    
    while(1){
        
        if (i>valor){
            break;
        }
        if (valor % i == 0) 
        { 
            contador++;
        }
        i++;
        continue;
    }
    
    
    if (contador == 2){
        printf("O número %d é primo.", valor);
    }
        
    else{
        printf("O número %d não é primo.", valor);
    }
        

    return (EXIT_SUCCESS);
}

