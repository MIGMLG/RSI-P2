/* 
 * File:   utils.h
 * Author: aluno
 *
 * Created on December 7, 2017, 9:36 AM
 */

#ifndef UTILS_H
#define	UTILS_H

struct jogadores{
    char jogador[50];
    int pontos;
    int jogos;
};
typedef struct jogadores Jogadores;

void clean_buffer();
int lerString(char *string, int max);
void countChar(char array[], char letra);
int lastIndex(char letra, char array[], int fimarray);

#endif	/* UTILS_H */


