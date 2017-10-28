/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 27 de Outubro de 2017, 18:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//
void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}
int main(int argc, char** argv) {
    char sexo[4];
    char sex;
    int i;
    
    for (i=1; i<=3; ++i){
        printf("Questionario nº: %d\n",i);
  
        while(1){
            printf("Introduza o seu sexo: ");
            sexo[i]= getchar();
            limparBufferEntrada();
            //printf("%c", sex);
            break;
        }
    }
    printf("\n");
    for (i=1; i<=3; ++i){
        printf("Sexo: %c\n", sexo[i]);
    }
    
    
  
    return (EXIT_SUCCESS);
}

