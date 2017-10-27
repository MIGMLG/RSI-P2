/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 27 de Outubro de 2017, 14:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor;
    
    while(1){
        printf("Introduza um Valor: ");
        scanf("%d", &valor);
        
        if (valor >=0 && valor<= 20) {
            if ( valor>=9.5){
                printf("Foi aprovado.");
            }
            else {
                printf("Não foi aprovado.");
            }
            break;
        }
        else {
            printf("Valor Invalido. Deve ser entre 0 e 20. ");
            continue;
        }
        
    }
    return (EXIT_SUCCESS);
}

