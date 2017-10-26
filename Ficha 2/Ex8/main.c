/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 21 de Outubro de 2017, 15:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horaentrada, minutoentrada;
    int horasaida, minutosaida;
    int tempoentrada;
    int temposaida;
    int tempotrabalho;
    
    printf("Introduza a hora de entrada: ");
    scanf("%d", &horaentrada);
    printf("Introduza os minutos de entrada: ");
    scanf("%d", &minutoentrada);

    printf("Introduza a hora de saida: ");
    scanf("%d", &horasaida);
    printf("Introduza os minutos de saida: ");
    scanf("%d", &minutosaida);
    
    tempoentrada= (horaentrada * 60) + minutoentrada;
    temposaida= (horasaida * 60) + minutosaida;
    
    if( tempoentrada > temposaida) {
        tempotrabalho= (1440 - tempoentrada) + temposaida;
        printf("Tempo de trabalho: %d horas e %d minutos", tempotrabalho/60, tempotrabalho%60);
    }
    else {
        tempotrabalho= temposaida - tempoentrada;
        printf("Tempo de trabalho: %d horas e %d minutos", tempotrabalho/60, tempotrabalho%60);
    }
    
    
    return (EXIT_SUCCESS);
}

