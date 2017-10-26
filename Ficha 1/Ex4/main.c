/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 16:27
 */

#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14

/*
 * 
 */
int main(int argc, char** argv) {
    double raio;
    
    printf("Introduza o valor do raio: ");
    scanf("%lf", &raio);
    printf("Area: %.2lf \nPerimetro: %.2lf ", (Pi*(raio*raio)) , (2*Pi*raio));

    return (EXIT_SUCCESS);
}

