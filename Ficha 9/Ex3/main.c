/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 21, 2017, 12:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

//MEDIA
void Media(int tamanho, int valores []){
    int i, soma = 0;
    
    for( i = 0; i < tamanho; ++i){
        soma = soma + valores[i];
    }
    
    printf("Media: %.2lf", (float)soma/tamanho);
}

void Input(int tamanho, int valores []){
    int i;
    
    for( i = 0; i < tamanho; ++i){
        printf("Introduza o Valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }
    
}

int main(int argc, char** argv) {
    int tamanho, *valores = NULL;
    
    printf("Introduza a quantidade de valores que deseja introduzir: ");
    scanf("%d", &tamanho);
    
    valores = (int *) malloc(tamanho * sizeof(int *));
   
    Input(tamanho, valores);
    Media(tamanho, valores);
    
    puts("");
    return (EXIT_SUCCESS);
}

