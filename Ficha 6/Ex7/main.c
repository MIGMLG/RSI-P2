/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 16 de Novembro de 2017, 9:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAMANHO 25

/*
 * 
 */
int main(int argc, char** argv) {
    char frase1[TAMANHO];
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);

    return (EXIT_SUCCESS);
}

