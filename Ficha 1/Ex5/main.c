/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 16:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned int base;
    unsigned int altura;
    
    printf("Introduza a base: ");
    scanf("%d", &base);
    printf("Introduza a altura: ");
    scanf("%d", &altura);
    printf("Area: %.2lf ", ((base*altura)/2.0) );
    
    

    return (EXIT_SUCCESS);
}

