/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 16:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    
    printf("Introduza um valor: ");
    scanf("%d", &i);
    printf("%d %d ", i-1 , i+1 );
    

    return (EXIT_SUCCESS);
}

