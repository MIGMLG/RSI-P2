/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 2 de Novembro de 2017, 12:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
double Notas(int n){
    int i;
    double notas; 
    double soma;
    
    for(i=0; i<n; ++i){
        printf("Introduza a nota %d: ", i+1);
        scanf("%lf", &notas);
        soma = soma + notas;
    }
    
    return soma/n;
}

int main(int argc, char** argv) {
    int n;
    double media;
    
    printf("Introduza um valor: ");
    scanf("%d", &n);
    
    media=Notas(n);
    
    printf("Média: %.2lf", media);
    
    return (EXIT_SUCCESS);
}

