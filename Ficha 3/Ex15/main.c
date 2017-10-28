/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 27 de Outubro de 2017, 19:19
 */

#include <stdio.h>
#include <stdlib.h>
#define estudos 100

/*
 * 
 */
//
int main(int argc, char** argv) {
    int i;
    int idade[estudos];
    int sexo[estudos];
    int estadocivil[estudos];
    double salario[estudos];
    int idades;
    //variaveis das questoes
    int questao1= 151;
    int questao2= 15;
    double questao3= 0;
    int questao4= 0;
    int questao5= 0;
    //contador
    int contador=1;
    
    
    while(1){
        printf("Questionario nº: %d\n",contador);
        printf("Introduza a sua idade: ");
        scanf("%d", &idades);
        if (idades<0) {
            contador=contador - 1;
            break;
        }
        else if (idades< 16 && idades>150){
            printf("Valor Invalido. ");
            continue;
        }
        else {
            idade[contador]= idades;
        }
        //Loop para o sexo
        while(1){
            printf("Introduza o seu sexo ( 1-M, 2-F ): ");
            scanf("%d", &sexo[contador]);
            if (sexo[contador]== 1 || sexo[contador]==2){
                break;
            }
            else {
                printf("Valor Invalido. ");
            }
        }
        // Loop para o estado civil
        while(1){
            printf("Introduza o seu estado civil: ");
            scanf("%d", &estadocivil[contador]);
            if (estadocivil[contador]>= 1 && estadocivil[contador]<=4){
                break;
            }
            else {
                printf("Valor Invalido. ");
            }
        }
        //Loop para o salario
        while(1){
            printf("Introduza o seu salario: ");
            scanf("%lf", &salario[contador]);
            if (salario[contador]>= 500){
                break;
            }
            else {
                printf("Valor Invalido. ");
            }
        }
        contador++;
    }
    
    //loop para descobrir a menor e maior idade
    for (i=1; i<=contador; ++i){
        if(questao1>idade[i]){
            questao1= idade[i];
        }
        if(questao2<idade[i]){
            questao2= idade[i];
        }
    }
    
    printf("A menor idade foi: %d anos\n", questao1);
    printf("A maior idade foi: %d anos\n", questao2);
    
    //media salarios
    for (i=1; i<=contador; ++i){
        questao3 += salario[i];
    }
    printf("Media dos salarios: %.2lf euros\n", questao3/contador);
    
    // quantidade do sexo feminino com saldo ate 1500
    for (i=1; i<=contador; ++i){
        if (sexo[i]==2 && salario[i]<=1500 ){
            questao4 = questao4 + 1;
        }
    }
    printf("Existem %d pessoa(s) do sexo feminino com ordenados até 1500 euros.\n", questao4);
    
    //ultima questao
    for (i=1; i<=contador; ++i){
        if (sexo[i]==1 && idade[i]<=35 && idade[i]>18 && estadocivil[i] == 2){
            questao5 = questao5 + 1;
        }
    }
    printf("Existem %d pessoa(s) do sexo masculino entre os 18 e 35 anos inclusive que sejam casados", questao5); 
    
    return (EXIT_SUCCESS);
}

