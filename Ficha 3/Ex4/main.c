/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 26 de Outubro de 2017, 12:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    int somatorio=0;
    
    for (num = 1; num <= 100; ++num) {
        printf("Valor: %d\n", num);
        somatorio += num;
    }
    
    printf("Somatorio: %d", somatorio);
    
    return (EXIT_SUCCESS);
}

