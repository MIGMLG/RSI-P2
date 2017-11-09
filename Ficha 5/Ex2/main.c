/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 9 de Novembro de 2017, 10:02
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 21

/*
 * 
 */
int main(int argc, char** argv) {
    int i, array[TAMANHO];
    
    for (i=0; i<TAMANHO; ++i){
        array[i] = i + 5;
    }
    
    for (i=0; i<TAMANHO; ++i){
        printf("%d ", array[i]);
    }
    
    return (EXIT_SUCCESS);
}


