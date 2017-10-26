/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 17:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor[3];
    int i;
    
    
    for(i=1; i<=3; ++i) {
        
        printf("Introduza uma nota de 0 a 20: ");
        scanf("%d", &valor[i]);
        
        if (valor[i]>20 || valor[i]<0){
            
            printf("Valor Invalido");
            i=--i;
            printf("\n");
        }
    }
    
    printf("Media: %.2lf ", (valor[1]*0.25)+(valor[2]*0.35)+(valor[3]*0.40) );

    return (EXIT_SUCCESS);
}

