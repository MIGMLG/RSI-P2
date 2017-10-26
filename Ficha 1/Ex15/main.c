/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 19:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horapartida;
    int minutopartida;
    int horachegada;
    int minutochegada;
    int distanciapecorrida;
    int combustivelgasto;
    int minutos;
    int horas;
    double horaexata;
    
    while (1){
        
        printf("Introduza a hora de partida: ");
        scanf("%d", &horapartida);
        printf("Introduza o minuto de partida: ");
        scanf("%d", &minutopartida);
        
        if (minutopartida>=60){
            printf("Valor Incorreto.");
            continue;
        }
        
        printf("Introduza a hora de chegada: ");
        scanf("%d", &horachegada);
        
        
        printf("Introduza o minuto de chegada: ");
        scanf("%d", &minutochegada);
        
        if (minutochegada>=60){
            printf("Valor Incorreto.");
            continue;
        }
        
        printf("Introduza a distancia pecorrida: ");
        scanf("%d", &distanciapecorrida);
        
        printf("Introduza os litros de combustivel gasto: ");
        scanf("%d", &combustivelgasto);
        break;
    }
    
    
    
    if(horachegada>horapartida){
        minutos= 60 - minutopartida;
        if (minutos==0){
            horas= horachegada-horapartida;
        }
        else {
            horas= horachegada-(horapartida+1);
        }
        minutos= minutos+minutochegada;
        
        while (1) {
            if (minutos>= 60){
            horas=horas+1;
            minutos=minutos-60;
            }
            else {
                break;
            }
        }
    }
    horaexata= horas + (minutos/60.0);
    printf("A viagem demorou %d h e %d min.\n", horas, minutos);
    printf("Durante a viagem fez %.2lf km/l\n", distanciapecorrida/(float)combustivelgasto);
    printf("A sua velocidade media foi: %.2lf KM/h\n",distanciapecorrida/horaexata);
    return (EXIT_SUCCESS);
}

