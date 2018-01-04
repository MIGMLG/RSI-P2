/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on January 4, 2018, 10:36 AM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int ch;
    //abrir ficheiros
    FILE *ficheiro = fopen("ficheiro.dat", "r");
    FILE *ficheiroBackup = fopen("ficheiro.bak", "w");
    if (ficheiro != NULL && ficheiroBackup != NULL) {
        //copiar até ao final do ficheiro
        while ((ch = getc(ficheiro)) != EOF) { //getc le carater de uma stream
            putc(ch, ficheiroBackup);
        }
        //fechar ficheiros
        fclose(ficheiro);
        fclose(ficheiroBackup);
        printf("Copia Terminada");
        puts("");
    }
    
    return (EXIT_SUCCESS);
}

