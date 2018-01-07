/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 4 de Janeiro de 2018, 13:02
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAMANHO 50

void alterarAluno(Aluno RegAluno[], int contador) {
    int i, valor, valido = 0;
    Aluno novoAluno;
    
    puts(" ");
    printf("Introduza o numero do aluno que pretende alterar: ");
    scanf("%d", &valor);
    
    for(i = 0 ; i < contador; ++i) {
        if (RegAluno[i].numero == valor){
            valido = 1;
            break;
        }
    }
    
    if(valido==1){
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
    
        RegAluno[i] = novoAluno;
    
    }
    else{
        puts("");
        printf("Valor Inexistente.");
    }
    
}

int eliminarAluno(Aluno RegAluno[], int contador) {
    int i, valor, valido = 0;
    
    puts(" ");
    printf("Introduza o numero do aluno que pretende eliminar: ");
    scanf("%d", &valor);
    
    for(i = 0 ; i < contador; ++i) {
        if (RegAluno[i].numero == valor){
            valido = 1;
            break;
        }
    }
    
    if(valido == 1){
        if(contador == 1){
            return 0;
        }
        else if( (contador - 1) == i ){
            return --contador;
        }
        else {
            RegAluno[i]=RegAluno[(contador-1)];
            return --contador;
        }     
    }
    else{
        puts("");
        printf("Valor Inexistente.");
    }
    
}

void imprimirAluno(Aluno RegAluno[], int contador) {
    int i, valor, valido = 0;
    
    puts(" ");
    printf("Introduza o numero do aluno que procura: ");
    scanf("%d", &valor);
    
    for(i = 0 ; i < contador; ++i) {
        if (RegAluno[i].numero == valor){
            valido = 1;
            break;
        }
    }
    if(valido==1){
        puts("");
        printf("Numero do Aluno: %d\n", RegAluno[i].numero);
        printf("Nome do Aluno: %s\n", RegAluno[i].nome);
        printf("Data de Nascimento do Aluno: %d-%d-%d\n", RegAluno[i].dia, RegAluno[i].InputMes ,RegAluno[i].ano);
    }
    else{
        puts("");
        printf("Valor Inexistente.");
    }
    
}

void imprimirLista(Aluno RegAluno[], int contador) {
    int i;
    
    for (i=0; i  < contador; ++i) {
        puts("");
        printf("Numero do Aluno: %d\n", RegAluno[i].numero);
        printf("Nome do Aluno: %s\n", RegAluno[i].nome);
        printf("Data de Nascimento do Aluno: %d-%d-%d\n", RegAluno[i].dia, RegAluno[i].InputMes ,RegAluno[i].ano);
    }

}


int Input(Aluno RegAluno[], int contador, int *tamanho){
    Aluno novoAluno;
    Aluno *b = NULL;
    
    puts(" ");
    
    //Adiciona vagas quando estiver cheio
    if( contador == *tamanho){
        printf("Lista Cheia. Foram adiconados mais 10 vagas.");
        b = (Aluno *) realloc(RegAluno, 10 );
        *tamanho = *tamanho + 10;
        free(RegAluno);
        RegAluno = b;
    }
    
    puts(" ");

    printf("Introduza o numero do aluno: ");
    scanf("%d", &novoAluno.numero);
    
    if(novoAluno.numero==-1){
        return contador;
    }

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
    
    RegAluno[contador] = novoAluno;
    return (++contador);
}

//Ler infromaçoes do Ficheiro
void LerFicheiro(Aluno RegAluno[], int contador, int *tamanho){
    int i=0;
    Aluno *b = NULL;
    
    
    
    //Adiciona vagas quando estiver cheio
    if( contador == *tamanho){
        puts(" ");
        printf("Lista Cheia. Foram adiconados mais 10 vagas.");
        b = (Aluno *) realloc(RegAluno, 10 );
        *tamanho = *tamanho + 10;
        free(RegAluno);
        RegAluno = b;
        puts(" ");
    }
    
    
    
    FILE *ficheiro = fopen("BD.dat", "rb");
    
    for(i = 0; i < contador; ++i) {
        fread(&RegAluno[i], sizeof(Aluno), 1, ficheiro);
    }
    fclose(ficheiro);
    
    puts(" ");
    printf("Done!");
    puts(" ");
}

//Guardar Contador
void guardarContador(int contador){
    
    FILE *contadorFicheiro = fopen("contador.dat", "wb");
    fwrite(&contador, sizeof(int), 1, contadorFicheiro);
    fclose(contadorFicheiro);
    printf("Done!");
    puts(" ");
}

//guardar informações no ficheiro
void guardarFicheiro(Aluno RegAluno[], int contador){
    int i;
    FILE *ficheiro = fopen("BD.dat", "wb");
    
    for(i = 0; i < contador; ++i) {
        fwrite(&RegAluno[i], sizeof(Aluno), 1, ficheiro);
    }
    
    fclose(ficheiro);
    
    puts(" ");
    printf("Done!");
    puts(" ");
}

int main(int argc, char** argv) {
    int opcao, tamanho;
    Aluno *RegAluno = NULL;
    int contador = 0;
    
    printf("Introduza a quantidade de alunos que deseja introduzir: ");
    scanf("%d", &tamanho);
    
    RegAluno = (Aluno *) malloc(tamanho * sizeof(Aluno));
    
    //Ler Contador
    FILE *contadorFicheiro = fopen("contador.dat", "rb");
    if(contadorFicheiro != NULL){
       fread(&contador, sizeof(int), 1, contadorFicheiro); 
    }
    fclose(contadorFicheiro);
    
    if(contador > 0){
        LerFicheiro(RegAluno,contador,&tamanho);
    }
    
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
                contador=Input(RegAluno, contador, &tamanho);
                guardarFicheiro(RegAluno,contador);
                guardarContador(contador);
                break;
            case 2:
                alterarAluno(RegAluno, contador);
                guardarFicheiro(RegAluno,contador);
                guardarContador(contador);
                break;
            case 3:
                contador=eliminarAluno(RegAluno,contador);
                guardarFicheiro(RegAluno,contador);
                guardarContador(contador);
                break;
            case 4:
                imprimirAluno(RegAluno, contador);
                break;
            case 5:
                imprimirLista(RegAluno, contador); 
                break;
            case 6:
                printf("GoodBye");
                opcao=6;
                break;
            default :
                printf("Opcao Invalida");
        }
        puts(" ");
    }while(opcao != 6);

    return (EXIT_SUCCESS);
}

