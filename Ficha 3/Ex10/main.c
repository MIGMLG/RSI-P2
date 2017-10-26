/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 26 de Outubro de 2017, 12:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i,j;
    
    for(i=1; i<=10; ++i){
        printf("Tabuda do %d\n", i);
        for (j=1; j<=10; ++j){
          printf("%d*%d=%d\n",i,j, i*j);  
        }
    }

    return (EXIT_SUCCESS);
}

