/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 21, 2017, 12:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

//MEDIA

void Input(int tamanho, int valores []){
    int i;
    
    for( i = 0; i<tamanho; ++i){
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
    
    puts("");
    return (EXIT_SUCCESS);
}

