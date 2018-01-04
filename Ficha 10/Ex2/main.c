/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on January 4, 2018, 11:02 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int contador = 0, ch;
    FILE *ficheiro = fopen("main.c", "r");
    
    while ((ch = getc(ficheiro)) != EOF) { //getc le carater de uma stream
        if( ch == ' ')
            ++contador;
        }
    
    printf("O ficheiro tem %d palavras.", contador);
    puts("");

    return (EXIT_SUCCESS);
}

