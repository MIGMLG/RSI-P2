/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 14, 2017, 11:05 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define REG 30

int Input(Aluno RegAluno[], int contador){
    int numero;
    
    printf("Introduza o numero do aluno: ");
    scanf("%d", &numero);
    RegAluno[contador].numero=numero;
    
    return (++contador);
}

int main(int argc, char** argv) {
    int opcao;
    Aluno RegAluno[REG];
    int contador=0;
    
    do{
        puts("Menu: ");
        puts("1- Inserção de Dados");
        puts("2- Alteração de Dados");
        puts("3- Remoção de Dados");
        puts("4- Consulta de Dados");
        puts("5- Listagem de Dados");
        puts("6- Fechar o Programa");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                contador=Input(RegAluno, contador);
                break;
            case 2:
                printf("Opcao 2");
                break;
            case 3:
                printf("Opcao 3");
                break;
            case 4:
                printf("Opcao 4");
                break;
            case 5:
                printf("Opcao 5");
                break;
            case 6:
                opcao=6;
                break;
            default :
                printf("Opcao Invalida");
        }
        puts(" ");
    }while(opcao!=6);

    return (EXIT_SUCCESS);
}

