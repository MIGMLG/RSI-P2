/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 17:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double temperatura;
    
    printf("Introduza a temperatura em Fahrenheit: ");
    scanf("%lf", &temperatura);
    printf("Temperatura em Celsius: %.2lf ºC ", ((temperatura-32)*5/9) );

    return (EXIT_SUCCESS);
}

