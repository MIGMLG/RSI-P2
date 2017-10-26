/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 26 de Outubro de 2017, 13:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    
    printf("Introduza um valor: ");
    scanf("%d", &num);
    
    if(num%2 > 0){
        for ( num-=2 ; num>0; num -= 2 ){
            printf("%d ", num);
        }
    }
    else{
        for ( num-=1 ; num>0; num -= 2 ){
            printf("%d ", num);
        }   
    }

    return (EXIT_SUCCESS);
}

