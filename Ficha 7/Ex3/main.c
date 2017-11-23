/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on November 23, 2017, 12:14 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 4
#define COLUNAS 3

/*
 * 
 */
void print(int matriz[][COLUNAS]){
    int i, j;
    
    printf("Codigo  Nota 1  Nota 2  Media");
    puts("");
     for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            if(j==0){
                printf("%6d", matriz[i][j]);
            }
            else if(j==1){
                printf("%8d", matriz[i][j]);
            }
            else if(j==2){
                printf("%8d", matriz[i][j]);
            }
        }
        printf("%7.2lf", (matriz[i][1]+matriz[i][2])/2.0);
        puts("");
    }
}

int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    
    for(i=0; i<LINHAS; ++i){
        for(j=0; j<COLUNAS; ++j){
            if(j==0){
                printf("Introduza o codigo: ");
                scanf("%d", &matriz[i][j]);
            }
            else{
                printf("Introduza a nota: ");
                scanf("%d", &matriz[i][j]);   
            }
        }
    }
    
    print(matriz);

    return (EXIT_SUCCESS);
}

