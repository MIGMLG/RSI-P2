/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 16:58
 */

#include <stdio.h>
#include <stdlib.h>
#define ligthspeed 300000.0

/*
 * 
 */
int main(int argc, char** argv) {
    int distancia;
    
    printf("Introduza a distancia em KM: ");
    scanf("%d", &distancia);
    printf("Tempo: %lf s ", distancia/ligthspeed );
    
    

    return (EXIT_SUCCESS);
}

