/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 24 de Outubro de 2017, 20:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    double saldo, opcao;
    
    printf("Introduza o saldo da conta bancaria:");
    scanf("%lf", &saldo);
    printf("Introduza valor positivo para depositar ou negativo pra debitar:");
    scanf("%lf", &opcao);
    
    
    if(opcao > 0 && saldo > 0) {
    printf("Operacao valida. Seu saldo e de : %.2lf euros.", opcao+saldo);
    }
    if (opcao < 0 && saldo > 0) {
    printf("Operacao valida. Seu saldo e de : %.2lf euros.", saldo-opcao);
    }
    else if (opcao > 0 && saldo < 0) {
    printf("Operacao invalida. Saldo insuficiente para completar a operacao.");
    }

return (0);
}

