/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 21 de Outubro de 2017, 16:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double x;
    
    printf("Introduza o valor de X: ");
    scanf("%lf", &x);
    
    if (x > 1) {
        printf("Y= %.2lf", 2 * x);
    }
    else if (x < 1) {
        printf("Y= %.2lf", x);
    }
    else {
        printf("Y = 0");
    }
    
    return (EXIT_SUCCESS);
}

