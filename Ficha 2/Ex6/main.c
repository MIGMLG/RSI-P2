/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 20 de Outubro de 2017, 16:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horas, minutos;
    
    printf("Introduza as horas no Sistema 24H: ");
    scanf("%d", &horas);
    printf("Introduza os minutos: ");
    scanf("%d", &minutos);
    
    if( horas>12 ){
        printf("Resultado: %d:%d PM", horas - 12, minutos);
    }
    else{
        printf("Resultado: %d:%d AM", horas, minutos);
    }

    return (EXIT_SUCCESS);
}

