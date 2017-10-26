/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 20 de Outubro de 2017, 16:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor1, valor2, valor3;
    
    printf("Introduza o primeiro Valor: ");
    scanf("%d", &valor1);

    printf("Introduza o segundo Valor: ");
    scanf("%d", &valor2);
    
    printf("Introduza o terceiro Valor: ");
    scanf("%d", &valor3);
    
    if( valor1 < valor2 && valor1< valor3) {
        printf("Valor Menor: %d", valor1);
    }
    else if (valor2 < valor1 && valor2< valor3){
        printf("Valor Menor: %d",valor2);
    }
    else if (valor3 < valor1 && valor3< valor2){
        printf("Valor Menor: %d",valor3);
    }
    else{
        printf("Os tres1 valores são iguais: %d\n", valor1);
    }
    

    return (EXIT_SUCCESS);
}

