/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 9 de Novembro de 2017, 10:06
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
/*
 * 
 */
void menor(double valores[]){
  int i, valor=valores[0];
  printf("\nMaior dos Valores: ");
  for(i=0; i< TAMANHO; ++i){
      if( valores[i]<valor){
          valor=valores[i];
      }
  }
  printf("%d", valor);
}

void maior(double valores[]){
  int i, valor=0;
  printf("\nMaior dos Valores: ");
  for(i=0; i< TAMANHO; ++i){
      if( valores[i]>valor){
          valor=valores[i];
      }
  }
  printf("%d", valor);
}

void media(double valores[]){
  int i, soma=0;
  printf("\nMedia dos Valores: ");
  for(i=0; i< TAMANHO; ++i){
      soma+= valores[i];
  }
  printf("%.2lf", (float)soma/TAMANHO);
}

void soma(double valores[]){
  int i, soma=0;
  printf("\nSoma dos Valores: ");
  for(i=0; i< TAMANHO; ++i){
      soma+= valores[i];
  }
  printf("%d", soma);
}

void dobro(double valores[]){
  int i;
  printf("\nDobro dos Valores: ");
  for(i=0; i< TAMANHO; ++i){
      printf("%.2lf, ", 2*valores[i]);
  }
}

void imprimir(double valores[]){
  int i; 
  printf("Valores Normais: ");
  for(i=0; i< TAMANHO; ++i){
      printf("%.2lf, ", valores[i]);
  }
}
                                
int main(int argc, char** argv) {
    double valores[TAMANHO];
    double valor;
    int i;
    
    for(i=0; i< TAMANHO; ++i){
        printf("Introduza um valor: ");
        scanf("%lf", &valores[i]);
    }
    
    imprimir(valores);
    dobro(valores);
    soma(valores);
    media(valores);
    maior(valores);
    menor(valores);
    
    return (EXIT_SUCCESS);
}

