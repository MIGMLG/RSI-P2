/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 21 de Outubro de 2017, 17:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double tempatual;
    int tempfinal;
    double diftemp;
    
    printf("Introduza a temperatura atual: ");
    scanf("%lf", &tempatual);
    printf("Introduza a temperatura desejada: ");
    scanf("%d", &tempfinal);
    
    diftemp= tempfinal - tempatual;
    
    if (diftemp>0){
        printf("Vai demorar aproximadamente: %.2lfs", ( diftemp * 180 ));
    }
    else {
        printf("Vai demorar aproximadamente: %.2lfs", ((diftemp * -1) * 120));
    }
    
    return (EXIT_SUCCESS);
}

