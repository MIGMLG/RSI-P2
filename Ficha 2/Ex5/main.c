/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 20 de Outubro de 2017, 16:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double valor1, valor2;
    int op;
    
    printf("Introduza o primeiro Valor: ");
    scanf("%lf", &valor1);

    printf("Introduza o segundo Valor: ");
    scanf("%lf", &valor2);
    
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Mutiplicar\n");
    printf("4-Dividir\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);
    
    switch (op){
        case 1:
            printf("Resultado: %.2lf", valor1 + valor2);
            break;
        case 2:
            printf("Resultado: %.2lf", valor1 - valor2);
            break;
        case 3:
            printf("Resultado: %.2lf", valor1 * valor2);
            break;
        case 4:
            printf("Resultado: %.2lf", valor1 / valor2);
            break;
        default:
            printf("Operação Invalida.");      
    }

    return (EXIT_SUCCESS);
}

