/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 25 de Outubro de 2017, 12:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    
    for (num = 2; num <= 300; num = num + 2) {
        printf("Valor: %d\n", num);
    }

    return (EXIT_SUCCESS);
}
