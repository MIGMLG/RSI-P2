/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 21 de Outubro de 2017, 17:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int minuto;
    double velocidademedia;
    double distanciacombustivel;
    
    printf("Introduza o tempo para a viagem: ");
    scanf("%d", &minuto);
    
    velocidademedia= 130/(minuto/60.0);
    
    if ( velocidademedia <= 60) {
        // podia ser facilmente alterado o programa para o utilizador
        // introduzir o combustivel que tinha no inicio e seria trocado
        // o valor 400 pelo valor introduzido pelo utilizador  X*100
        distanciacombustivel = 400/5.0;
        if (distanciacombustivel < 60) {
            printf("Não vai conseguir chegar ao primeiro posto.");
        }
        else if ( distanciacombustivel >= 60 && distanciacombustivel < 70){
            printf("Tem de parar no primeiro posto a 60KM");
        }
        else if ( distanciacombustivel >= 70 && distanciacombustivel < 79){
            printf("Tem de parar no segundo posto a 70KM");
        }
        else {
            printf("Tem de parar no terceirio posto a 79KM");
        }
    }
    else if ( velocidademedia > 120 ) {
        distanciacombustivel = 400/7.0;
        if (distanciacombustivel < 60) {
            printf("Não vai conseguir chegar ao primeiro posto.");
        }
        else if ( distanciacombustivel >= 60 && distanciacombustivel < 70){
            printf("Tem de parar no primeiro posto a 60KM");
        }
        else if ( distanciacombustivel >= 70 && distanciacombustivel < 79){
            printf("Tem de parar no segundo posto a 70KM");
        }
        else {
            printf("Tem de parar no terceirio posto a 79KM");
        }
    }
    else {
        distanciacombustivel = 400/6.0;
        if (distanciacombustivel < 60) {
            printf("Não vai conseguir chegar ao primeiro posto.");
        }
        else if ( distanciacombustivel >= 60 && distanciacombustivel < 70){
            printf("Tem de parar no primeiro posto a 60KM");
        }
        else if ( distanciacombustivel >= 70 && distanciacombustivel < 79){
            printf("Tem de parar no segundo posto a 70KM");
        }
        else {
            printf("Tem de parar no terceirio posto a 79KM");
        }
    }

    return (EXIT_SUCCESS);
}

