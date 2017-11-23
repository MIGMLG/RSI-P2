/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 16 de Novembro de 2017, 22:15
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAMANHO 25

/*
 * 
 */
int main(int argc, char** argv) {
    char frase1[TAMANHO];
    char frase2[TAMANHO];
    char frase3[2]=",\0";
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);
    printf("Escreva algo: ");
    lerString(frase2, TAMANHO);
    
    strcat(frase1,frase3);
    strcat(frase1,frase2);
    
    printf("Frase: %s", frase1);
    
    return (EXIT_SUCCESS);
}

