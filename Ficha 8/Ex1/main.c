/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 14, 2017, 11:05 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define REG 30
#define TAMANHO 50

int Input(Aluno RegAluno[], int contador){
    Aluno novoAluno;
    
    //Adicionar Limite de 30
    
    puts(" ");
    
    printf("Introduza o numero do aluno: ");
    scanf("%d", &novoAluno.numero);

    //Bug
    clean_buffer();

    printf("Introduza o nome do aluno: ");
    lerString(novoAluno.nome, TAMANHO);
    
    printf("Introduza o dia de nascimento do aluno: ");
    scanf("%d", &novoAluno.dia);
    
    printf("Introduza o Mes de nascimento (1-12) do aluno: ");
    scanf("%d", &novoAluno.InputMes);
    
    printf("Introduza o ano de nascimento do aluno: ");
    scanf("%d", &novoAluno.ano);
    
    RegAluno[contador]=novoAluno;
    return (++contador);
}

int main(int argc, char** argv) {
    int opcao;
    Aluno RegAluno[REG];
    int contador=0;
    
    do{
        puts("Menu: ");
        puts("1- Insercao de Dados");
        puts("2- Alteracao de Dados");
        puts("3- Remocao de Dados");
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

