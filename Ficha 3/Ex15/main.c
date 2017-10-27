/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 27 de Outubro de 2017, 15:27
 */

#include <stdio.h>
#include <stdlib.h>
#define estudos 3

/*
 * 
 */
void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

int main(int argc, char** argv) {
    int idade[estudos];
    char sexo[estudos];
    int estadocivil[estudos];
    double salario[estudos];
    char sex;
    int i;
    int questao1= 151;
    int questao2= 15;
    int soma=0;
    
    for (i=1; i<=estudos; ++i){
        printf("Questionario nº: %d\n",i);
       // Loop para a idade 
        while(1){
            printf("Introduza a sua idade: ");
            scanf("%d", &idade[i]);
            if (idade[i]>= 16 && idade[i]<=150){
                break;
            }
            else {
                printf("Valor Invalido.");
            }
        }
        //Loop para o sexo
        while(1){
            printf("Introduza o seu sexo: ");
            limparBufferEntrada();
            scanf("%c", &sex);
            
            if (sex=='M' || sex=='m' || sex=='F' || sex=='f'){
                printf("%c", sexo[1]);
                break;
            }
            else {
                printf("Valor Invalido.");
            }
        }
        // Loop para o estado civil
        while(1){
            printf("Introduza o seu estado civil: ");
            scanf("%d", &estadocivil[i]);
            if (estadocivil[i]>= 1 && estadocivil[i]<=4){
                break;
            }
            else {
                printf("Valor Invalido.");
            }
        }
        //Loop para o salario
        while(1){
            printf("Introduza o seu salario: ");
            scanf("%lf", &salario[i]);
            if (salario[i]>= 500){
                break;
            }
            else {
                printf("Valor Invalido.");
            }
        }        
    }
    
    for (i=1; i<=estudos; ++i){
        printf("%d", idade[i]);
    }
    printf("\n");
    
    //loop para descobrir a menor idade
    for (i=1; i<=estudos; ++i){
        if(questao1>idade[i]){
            questao1= idade[i];
        }
        if(questao2<idade[i]){
            questao2= idade[i];
        }
    }
    
    printf("A menor idade foi: %d anos\n", questao1);
    printf("A maior idade foi: %d anos\n", questao2);
    
    for (i=1; i<=estudos; ++i){
        printf("%d", idade[i]);
    }
    

    return (EXIT_SUCCESS);
}

