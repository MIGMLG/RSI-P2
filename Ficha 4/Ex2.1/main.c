/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 2 de Novembro de 2017, 12:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int valor1, valor2, op;
double resultado;

long soma(){
    return valor1 + valor2;
}
long subtrair(){
    return valor1 - valor2;
}
double multiplicar(){
    return valor1 * valor2;
}
double dividir(){
    return (float)valor1 / valor2;
}

int main(int argc, char** argv) {

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
            resultado=soma();
            break;
        case 2:
            resultado=subtrair();
            break;
        case 3:
            resultado=multiplicar();
            break;
        case 4:
            resultado=dividir();
            break;
        default:
            printf("Operação Invalida.");      
    }

    printf("Resultado: %.2lf", resultado);
    return (EXIT_SUCCESS);
}

