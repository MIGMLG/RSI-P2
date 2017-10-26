/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 17:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double massa;
    double altura;
    
    printf("Introduza a sua massa: ");
    scanf("%lf", &massa);
    
    printf("Introduza a sua altura: ");
    scanf("%lf", &altura);
    
    printf("IMC: %.2lf ", massa/(altura*altura) );
    
    
    return (EXIT_SUCCESS);
}

