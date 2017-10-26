/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 18:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int minutos[5];
    int segundos[5];
    int somamin;
    int somaseg;
    int i;
    int hora;

    
    for(i=1; i<=5; ++i) {
        
        printf("Introduza a quantidade de minutos da musica: ");
        scanf("%d", &minutos[i]);
        printf("Introduza a quantidade de segundos da musica: ");
        scanf("%d", &segundos[i]);
        
        if (segundos[i]>=60){
            printf("Valor Invalido");
            i=--i;
            printf("\n");
        }
        
        somamin= somamin + minutos[i];
        somaseg= somaseg + segundos[i];
    }
    
    while (1) {
        if (somamin>= 60){
            hora=hora+1;
            somamin=somamin-60;
        }
        else if (somaseg>=60){
            somamin=somamin+1;
            somaseg=somaseg-60;
        }
        else {
            break;
        }
    }
    
    
    
    printf(" Horas %d, Minutos %d, Segundos %d \n", hora, somamin, somaseg);
    

    return (EXIT_SUCCESS);
}

