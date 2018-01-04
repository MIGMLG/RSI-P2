/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   utils.h
 * Author: aluno
 *
 * Created on 4 de Janeiro de 2018, 13:16
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

#endif	/* UTILS_H */

