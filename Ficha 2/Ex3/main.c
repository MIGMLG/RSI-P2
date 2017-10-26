/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 20 de Outubro de 2017, 15:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor[3];
    double media;
    int i;
    
    for(i=1; i<=3; ++i) {
        
        printf("Introduza a Nota %d: ", i);
        scanf("%d", &valor[i]);
    }
    
    media = ((valor[1] * 0.25) + (valor[2] * 0.35) + (valor[3] * 0.4));
    printf("Media: %.2lf ", media);
    
    if( media >= 9.5 ){
        printf("Foi aprovado(a).");   
    }
    else {
        printf("Não foi aprovado(a).");
    }
    return (EXIT_SUCCESS);
}

