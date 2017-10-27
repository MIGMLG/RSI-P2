/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 27 de Outubro de 2017, 14:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor;
    int soma=0, contador=0;
    
    while(1){
        printf("Introduza um Valor: ");
        scanf("%d", &valor);
        
        if (valor == -1) {
            printf("Media : %.2lf", (float)soma/contador);
            break;
        }
        else {
            soma+= valor;
            contador++;
        }
    }

    return (EXIT_SUCCESS);
}

