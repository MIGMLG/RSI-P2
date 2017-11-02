/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 2 de Novembro de 2017, 12:16
 */

#include <stdio.h>
#include <stdlib.h>
#define ETD 1.16292
#define DTE 0.85980

/*
 * 
 */
void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

double lerDouble(){
    double valor;
    printf("Introduza o valor: ");
    scanf("%lf", &valor);
    return valor;
}

char lerChar(){
    char moeda;
    printf("Introduza a moeda atual: ");
    limparBufferEntrada();
    scanf("%c", &moeda);
    limparBufferEntrada();
    return moeda;
}

void converter(double valor, char moeda){
    if( moeda=='E' || moeda=='e'){
        printf("Resultado: %.2lf $", valor*ETD );
    }
    else if(moeda=='D' || moeda=='d'){
        printf("Resultado: %.2lf €", valor*DTE );
    }
    else {
        printf("Valor Invalido.");
    }
}

int main(int argc, char** argv) {
    double valor;
    char moeda;
    
    valor=lerDouble();
    
    moeda=lerChar();
    
    converter(valor, moeda);
    
    return (EXIT_SUCCESS);
}

