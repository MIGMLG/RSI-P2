/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 16:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned int comprimento;
    unsigned int largura;
    
    printf("Introduza o comprimento: ");
    scanf("%d", &comprimento);
    printf("Introduza a largura: ");
    scanf("%d", &largura);
    printf("Area: %d \nPerimetro: %d ", comprimento*largura, 2*comprimento+2*largura);
    
    

    return (EXIT_SUCCESS);
}

