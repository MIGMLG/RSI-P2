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
#define TAMANHO 50

/*
 * 
 */
int main(int argc, char** argv) {
    char frase1[TAMANHO];
    int i, contador =0;
    
    
    for(i=0; i<TAMANHO; ++i){
        frase1[i]=' ';
    }
    
    printf("Escreva algo: ");
    lerString(frase1, TAMANHO);
    
    for(i=0; i<TAMANHO; ++i){
        if(frase1[i]==' '){
            continue;
        }
        else{
            contador+=1;
        }
    }
    
    printf("Nr de chars: %d", contador-2);
    
    return (EXIT_SUCCESS);
}

