/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 9 de Novembro de 2017, 9:50
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"

#define TAMANHO 10

/*
 * 
 */
void verificar(char caract[]){
   char letra;
   int i, contador=0;
    
   printf("Introduza o char que pretende informação: ");     
   letra=getchar();
   limparBufferEntrada();
   
   printf("Encontra se nas posições: ");
   
   for(i=0; i< TAMANHO; ++i){
       if(letra==caract[i]){
           contador+=1;
           printf("%d ", i);
       }
   }
   
   printf("\nExistem %d letras %c.", contador, letra);
   
}
int main(int argc, char** argv) {
    int i;
    char caracteres[TAMANHO];
    
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza um char: ");
        caracteres[i]=getchar();
        limparBufferEntrada();
    }
    
    verificar(caracteres);

    return (EXIT_SUCCESS);
}

