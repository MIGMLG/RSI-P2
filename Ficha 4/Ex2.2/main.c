/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 2 de Novembro de 2017, 12:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
long soma(int valor1, int valor2){
    return valor1 + valor2;
}
long subtrair(int valor1, int valor2){
    return valor1 - valor2;
}
double multiplicar(int valor1, int valor2){
    return valor1 * valor2;
}
double dividir(int valor1, int valor2){
    return (float)valor1 / valor2;
}

int main(int argc, char** argv) {
    int op, valor1=10, valor2=3;
    double resultado;
    
    printf("Introduza o primeiro Valor: ");
    scanf("%d", &valor1);

    printf("Introduza o segundo Valor: ");
    scanf("%d", &valor2);
    
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Mutiplicar\n");
    printf("4-Dividir\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);
     
    
    switch (op){
        case 1:
            resultado=soma(valor1, valor2);
            break;
        case 2:
            resultado=subtrair(valor1, valor2);
            break;
        case 3:
            resultado=multiplicar(valor1, valor2);
            break;
        case 4:
            resultado=dividir(valor1, valor2);
            break;
        default:
            printf("Operação Invalida.");      
    }

    printf("Resultado: %.2lf", resultado);
    return (EXIT_SUCCESS);
}

