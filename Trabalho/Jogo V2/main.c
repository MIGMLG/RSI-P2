/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 30 de Novembro de 2017, 16:20
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAMPOS 2
#define TAMATRIZ 9
#define PECAS 2
#define VALORINCIAL -1

/*
 * 
 */

void printMatriz(int matriz[][TAMATRIZ],char tokens[]){
    int i,j;
    int abc =65;
    
    //Imprime a primeira linha com as letras
    printf(" ");
    printf("|");
    for(i=0; i<TAMATRIZ; ++i){
        printf("%c", abc);
        printf("|");
        ++abc;
    }
    
    puts(" ");
    for(i=0; i< TAMATRIZ; ++i){
        //Imprime a primeira coluna com os numeros
        printf("%d", i+1);
        printf("|");
        //Imprime a matriz
        for(j=0; j< TAMATRIZ; ++j){
            //Imprime as posições vazias
            if(matriz[i][j]==VALORINCIAL){
                printf("-");
            }
            //Imprime as posições do jogador 1
            else if(matriz[i][j]==0){
                printf("%c", tokens[0]);
            }
            //Imprime as posições do jogador 2
            else if(matriz[i][j]==1){
                printf("%c", tokens[1]);
            }
            printf("|");
        }
        puts(" ");
    }
    
}

int verificarVitoria(int matriz[][TAMATRIZ], int quemjoga){
    int i,j;
    
    //verifica as colunas para ver se o jogador ganhou
    for(i=0; i<TAMATRIZ ; ++i){
        for(j=0; j< (TAMATRIZ - 2); ++j){
             if(matriz[i][j]==quemjoga && matriz[i][j]==matriz[i][j+1] && matriz[i][j]==matriz[i][j+2]){
                 return 1;
             }
        }
    }
    
   //verifica as linhas para ver se o jogador ganhou
    for(i=0; i<(TAMATRIZ - 2); ++i){
        for(j=0; j< TAMATRIZ; ++j){
             if(matriz[i][j]==quemjoga && matriz[i][j]==matriz[i+1][j] && matriz[i][j]==matriz[i+2][j]){
                 return 1;
             }     
        }
    }
    
    //verifica as diagonais da esquerda para a direita
    for(i=0; i<(TAMATRIZ - 2); ++i){
        for(j=0; j<(TAMATRIZ - 2); ++j){
             if(matriz[i][j]==quemjoga && matriz[i][j]==matriz[i+1][j+1] && matriz[i][j]==matriz[i+2][j+2]){
                 return 1;
             }  
        }
    }
    
    //verifica as diagonais da direita para a esquerda
    for(i=0; i<(TAMATRIZ- 2); i++){
        for(j=0; j<(TAMATRIZ - 2)/* nao e preciso procurar nas ultimas posicoes */; j++){
             if(matriz[i][j+2]==quemjoga && matriz[i][j+2]==matriz[i+1][j+1] && matriz[i][j+2]==matriz[i+2][j]){
                 return 1;
             }
                 
        }
    }
    
    return 0;
}

int verificasJogadas(int matriz[][TAMATRIZ], char tokens[], char coluna, int linha, int quemjoga, int jogadas[]){
    int i,j;
    int abc = 65;
    int vitoria = 0;
    
    //Se as letras tiverem em minuscula passa para Maiuscula
    if(coluna>=97){
        coluna-=32;
    }
    
    //Verifica se a posição é valida na Matriz
    for(i=0; i<TAMATRIZ; ++i){
        if(coluna==(abc+i) && linha>0 && linha <=TAMATRIZ){
            if(matriz[(linha-1)][((abc+i)-65)]==-1){
                matriz[(linha-1)][((abc+i)-65)]=quemjoga;
                //Contador para as jogadas realizadas
                jogadas[quemjoga]+=1;
                //Imprime a Matriz
                puts("");
                printMatriz(matriz,tokens);
                //Verificar se alguem ganhou
                vitoria=verificarVitoria(matriz,quemjoga);
                if(vitoria>0){
                    puts("");
                    printf("O jogador %d ganhou. Numero de Jogadas: %d", quemjoga+1,jogadas[quemjoga]);
                    return quemjoga+2;
                }
                //Se ninguem ganhou continua o jogo
                return abs(quemjoga-1);
            }
            else{
                printf("Posição Ocupada.");
                return quemjoga;
            }
            
        }
    }
    
    //Posição para desistir
    if(coluna=='Z' || coluna=='z' && linha==0){
        printf("O jogador %d ganhou. Numero de Jogadas: %d", (abs(quemjoga-1)+1),jogadas[abs(quemjoga-1)]);
        return quemjoga+2;
    }
    
    printf("Posição Inexistente.");
    return quemjoga;
}

void jogadas(int matriz[][TAMATRIZ], char tokens[]){
    char coluna;
    int linha;
    int quemjoga=0;
    int jogadas[]={0,0};
    
    //Input para Jogadas
    do{
        puts("");
        printf("Jogador %d introduza a coluna: ", quemjoga+1);
        scanf("%c", &coluna);
        clean_buffer();
        printf("Jogador %d introduza a linha: ", quemjoga+1);
        scanf("%d", &linha);
        //Verifica as jogadas e troca para o jogador seguinte
        quemjoga=verificasJogadas(matriz,tokens,coluna,linha,quemjoga,jogadas);
        clean_buffer();
    }while(quemjoga<2);
    

}

void criarMatriz(int matriz[][TAMATRIZ]){
    int i, j;

    //Prenche a matriz com -1
    for(i=0; i< TAMATRIZ; ++i){
        for(j=0; j< TAMATRIZ; ++j){
            matriz[i][j]=VALORINCIAL;
        }
    }
    
}

void escolherTokens(char tokens[]){
    int i;
    
    //Premite a escolha dos tokens e guarda no array de chars
    for(i=0; i<PECAS; ++i){
        printf("Jogador %d escolha o seu token: ", i+1);
        scanf("%c", &tokens[i]);
        if(tokens[1]==tokens[0]){
            puts("Os tokens tem de ser diferentes.");
            clean_buffer();
            --i;
            continue;
        }
        clean_buffer();
    }
    puts("");
    
}

int main(int argc, char** argv) {
    char tokens[PECAS];
    int matriz[TAMATRIZ][TAMATRIZ];
    
    escolherTokens(tokens);
    criarMatriz(matriz);
    printMatriz(matriz,tokens);
    jogadas(matriz,tokens);
    
    return (EXIT_SUCCESS);
}