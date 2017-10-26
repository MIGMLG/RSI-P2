 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 25 de Outubro de 2017, 13:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valorinicial;
    int valorfinal;
    
    printf("Introduza o valor inicial: ");
    scanf("%d", &valorinicial);

    printf("Introduza o valor final: ");
    scanf("%d", &valorfinal);
    
    for(++valorinicial; valorinicial < valorfinal; valorinicial += 1){
        printf("%d\n", valorinicial);
    }
    
    return (EXIT_SUCCESS);
}

