/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 2 de Novembro de 2017, 20:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor;
    const  int valorinical=0; 
    
    
    printf("Introduza um valor: ");
    scanf("%d", &valor);
    const  int valorfinal=valor;
    
    for (valorinical; (valor-valorfinal)<=valorfinal; ++valor){
        printf("%d", valor-valorfinal);
        puts("");
    }
    
    return (EXIT_SUCCESS);
}
