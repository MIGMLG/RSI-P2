/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 2 de Novembro de 2017, 20:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor;
    
    printf("Introduza um valor: ");
    scanf("%d", &valor);
    
    do{
        
        printf("Valor: %d", valor);
        valor-= 1;
        puts("");
        
    }while(valor>=0);

    return (EXIT_SUCCESS);
}

