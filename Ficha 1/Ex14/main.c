/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 18:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int votos[5];
    int totalvotos;
    int i;

    
    for(i=1; i<=5; ++i) {
        
        printf("Introduza a quantidade de votos do candidato Nº%d: ", i);
        scanf("%d", &votos[i]);
        
        totalvotos= totalvotos + votos[i];
    }
    
    for(i=1; i<=5; ++i) {
        
        printf("O candidato Nº%d teve %.2lf porcento dos votos.\n", i, ((float)votos[i]/totalvotos)*100);
    
    }

    printf("Numero de votos: %d \n", totalvotos);
    
    return (EXIT_SUCCESS);
}

