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

int main(int argc, char** argv) {
    int valor;
    
    valor=max();
    printf("Valor: %d", valor);
    return (EXIT_SUCCESS);
}

