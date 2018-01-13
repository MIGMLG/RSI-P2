/* 
 * File:   utils.h
 * Author: aluno
 *
 * Created on December 7, 2017, 9:36 AM
 */

#ifndef UTILS_H
#define	UTILS_H

struct jogo{
    int jogo;
    char jogador1[50];
    char jogador2[50];
    int vitorias1;
    int vitorias2;
};
typedef struct jogo Jogo;

void clean_buffer();
int lerString(char *string, int max);
void countChar(char array[], char letra);
int lastIndex(char letra, char array[], int fimarray);

#endif	/* UTILS_H */


