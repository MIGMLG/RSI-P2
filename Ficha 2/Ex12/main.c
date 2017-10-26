/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 21 de Outubro de 2017, 16:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y;
    
    printf("Introduza a cordenada x: ");
    scanf("%d", &x);
    printf("Introduza a cordenada y: ");
    scanf("%d", &y);
    
    if (x>0) {
        if (y>0) {
            printf("O ponto encontrase no primeiro quadrante.");
        }
        else if (y<0){
            printf("O ponto encontrase no quarto quadrante.");
        }
        else {
            printf("O ponto encontrase no eixo X.");
        }
    }
    else if (x<0){
        if (y>0) {
            printf("O ponto encontrase no segundo quadrante.");
        }
        else if (y<0){
            printf("O ponto encontrase no terceiro quadrante.");
        }
        else {
            printf("O ponto encontrase no eixo X.");
        }
    }
    else {
        if (y=0){
            printf("O ponto encontrasse na origem.");
        }
        else {
            printf("O ponto encontrasse no eixo Y.");
        }
    }

    return (EXIT_SUCCESS);
}

