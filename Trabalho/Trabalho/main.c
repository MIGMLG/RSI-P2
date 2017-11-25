/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 25 de Novembro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define pecas 2

/*
 * 
 */

void escolherTokens(char tokens[]){
    int i;
    
    for(i=0; i<pecas; ++i){
        printf("Jogador %d escolha o seu token: ", i);
        scanf("%c", &tokens[i]);
        clean_buffer();
    }
    
}

int main(int argc, char** argv) {
    char tokens [pecas];
    
    escolherTokens(tokens);
    

    return (EXIT_SUCCESS);
}

