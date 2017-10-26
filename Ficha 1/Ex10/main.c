/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 17:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor[5];
    int i;
    
    
    for(i=1; i<=5; ++i) {
        
        printf("Introduza um numero: ");
        scanf("%d", &valor[i]);
    }
    
    printf("Media: %.2lf ", (valor[1]+valor[2]+valor[3]+valor[4]+valor[5])/5.0 );
    
    return (EXIT_SUCCESS);
}

