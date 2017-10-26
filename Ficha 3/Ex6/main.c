/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 26 de Outubro de 2017, 13:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int limite;
    int salto;
    int i;      
    
    printf("Introduza o valor do limite: ");
    scanf("%d", &limite);
    
    printf("Introduza o valor do salto: ");
    scanf("%d", &salto);
    
    for (i=0; i<= limite; i+= salto) {
        printf("%d \n",i);
    } 
    
    return (EXIT_SUCCESS);
}

