/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 21, 2017, 11:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

void somar(int num1, int num2, long *resultado){
    *resultado = num1 + num2;
}

int main(int argc, char** argv) {
    int num1, num2; 
    long resultado = 0, *r = NULL;
    r = &resultado;
    
    printf("Introduza o primeiro valor a somar: ");
    scanf("%d", &num1);
    
    printf("Introduza o primeiro valor a somar: ");
    scanf("%d", &num2);
    
    somar(num1, num2, r);
            
    printf("Resultado: %ld ", resultado );
    puts(" ");
    return (EXIT_SUCCESS);
}

