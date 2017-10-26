/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 13 de Outubro de 2017, 19:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double deposito;
    double taxa;
    int i;
    
    printf("Introduza o valor do deposito: ");
    scanf("%lf", &deposito);

    printf("Introduza a taxa de juros: ");
    scanf("%lf", &taxa);
    
    for(i=1; i<=4; ++i) {
        
        double valortaxa;
        double saldotrimestral;
        valortaxa= deposito*(taxa/100);
        saldotrimestral= deposito-valortaxa;
        printf("No Trimestre Nº%d o valor da taxa foi %.2lf e o saldo foi %.2lf\n", i,valortaxa, saldotrimestral );
        deposito= saldotrimestral;
    }
    return (EXIT_SUCCESS);
}

