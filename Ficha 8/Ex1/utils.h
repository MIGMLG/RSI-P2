/* 
 * File:   utils.h
 * Author: aluno
 *
 * Created on December 7, 2017, 9:36 AM
 */

#ifndef UTILS_H
#define	UTILS_H

enum mes{JAN=1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};
typedef enum mes Mes;

struct aluno{
    int numero;
    char nome[50];
    int dia;
    Mes InputMes;
    int ano;
};
typedef struct aluno Aluno;

void clean_buffer();
int lerString(char *string, int max);
void countChar(char array[], char letra);
int lastIndex(char letra, char array[], int fimarray);

#endif	/* UTILS_H */


