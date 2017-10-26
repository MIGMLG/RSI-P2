/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 18:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horas;
    int minutos;
    int valor;
    
    printf("Introduza um valor de segundos: ");
    scanf("%d", &valor);
    
    while (1) {
        if (valor>= 3600){
            horas=horas+1;
            valor=valor-3600;
        }
        else if (valor>=60){
            minutos=minutos+1;
            valor=valor-60;
        }
        else {
            break;
        }
    }
    
    printf(" Horas %d, Minutos %d, Segundos %d \n", horas, minutos, valor);
    return (EXIT_SUCCESS);
}

