/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 21 de Outubro de 2017, 17:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int saldo;
    int op;
    
    printf("Introduza o seu saldo: ");
    scanf("%d", &saldo);
    
    printf("Motante a debitar/creditar: ");
    scanf("%d", &op);
    
    if (op < 0) {
        if( (op*-1) > saldo) {
            printf("Saldo Insuficiente.");
        }
        else {
            printf("Saldo: %d", (saldo + op) );
        }
    }
    else {
        printf("Saldo: %d", (saldo + op) );
    }
    

    return (EXIT_SUCCESS);
}

