/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Miguel Costa
 *
 * Created on 25 de Novembro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAMPOS 2
#define TAMATRIZ 10
#define PECAS 2

/*
 * 
 */

void printMatriz(char matriz[][TAMATRIZ]){
    int i,j;
    //Imprime a Matriz
    for(i=0; i< TAMATRIZ; ++i){
        for(j=0; j< TAMATRIZ; ++j){
            printf("%c", matriz[i][j]);
            printf("|");
        }
        puts(" ");
    }
    
}

int vitoria(char matriz[][TAMATRIZ], char tokens){
    int i,j;
    
    //verifica as colunas para ver se o jogador ganhou
    for(i=1; i<TAMATRIZ ; ++i){
        for(j=1; j< (TAMATRIZ - 3); ++j){
             if(matriz[i][j]==tokens && matriz[i][j]==matriz[i][j+1] && matriz[i][j]==matriz[i][j+2]){
                 return 1;
             }
        }
    }
    
   //verifica as linhas para ver se o jogador ganhou
    for(i=1; i<(TAMATRIZ - 3); ++i){
        for(j=1; j< TAMATRIZ; ++j){
             if(matriz[i][j]==tokens && matriz[i][j]==matriz[i+1][j] && matriz[i][j]==matriz[i+2][j]){
                 return 1;
             }     
        }
    }
    
    //verifica as diagonais da esquerda para a direita
    for(i=1; i<(TAMATRIZ - 3); ++i){
        for(j=1; j<(TAMATRIZ - 3); ++j){
             if(matriz[i][j]==tokens && matriz[i][j]==matriz[i+1][j+1] && matriz[i][j]==matriz[i+2][j+2]){
                 return 1;
             }  
        }
    }
    
    //verifica as diagonais da direita para a esquerda
    for(i=1; i<(TAMATRIZ- 3); i++){
        for(j=1; j<(TAMATRIZ - 3)/* nao e preciso procurar nas ultimas posicoes */; j++){
             if(matriz[i][j+3]==tokens && matriz[i][j+3]==matriz[i+1][j+2] && matriz[i][j+3]==matriz[i+2][j+1]){
                 return 1;
             }
                 
        }
    }
    
    return 0;
}

int checkjogadas(char matriz[][TAMATRIZ], char tokens, char coluna, int linha){
    //Verifica se a coluna e a linha existe. Se sim altera a posição na matriz
    if(coluna=='A' || coluna=='a'){
        if(linha>0 && linha<10){
            if(matriz[linha][1]=='-'){
              matriz[linha][1]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0;  
        }
        puts("Posicao Inexistente.");
        return 0; 
    }
    else if(coluna=='B' || coluna=='b'){
        if(linha>0 && linha<10){
            if(matriz[linha][2]=='-'){
              matriz[linha][2]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0; 
    }
    else if(coluna=='C' || coluna=='c'){
        if(linha>0 && linha<10){
            if(matriz[linha][3]=='-'){
              matriz[linha][3]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0; 
    }
    else if(coluna=='D' || coluna=='d'){
        if(linha>0 && linha<10){
            if(matriz[linha][4]=='-'){
              matriz[linha][4]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0; 
    }
    else if(coluna=='E' || coluna=='e'){
        if(linha>0 && linha<10){
            if(matriz[linha][5]=='-'){
              matriz[linha][5]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0; 
    }
    else if(coluna=='F' || coluna=='f'){
        if(linha>0 && linha<10){
            if(matriz[linha][6]=='-'){
              matriz[linha][6]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0; 
    }
    else if(coluna=='G' || coluna=='g'){
        if(linha>0 && linha<10){
            if(matriz[linha][7]=='-'){
              matriz[linha][7]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0; 
    }
    else if(coluna=='H' || coluna=='h'){
        if(linha>0 && linha<10){
            if(matriz[linha][8]=='-'){
              matriz[linha][8]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0;
    }
    else if(coluna=='I' || coluna=='i'){
        if(linha>0 && linha<10){
            if(matriz[linha][9]=='-'){
              matriz[linha][9]=tokens;
              return 1;  
            }
            puts("Posicao Ocupada.");
            return 0; 
        }
        puts("Posicao Inexistente.");
        return 0;
    }
    //Verificar a posição para desitir
    else if(coluna=='Z' || coluna=='z'){
        if(linha==0){            
            return 10; 
        }
        puts("Posicao Inexistente.");
        return 0;
    }
    else{
        puts("Posicao Inexistente.");
        return 0;  
    }

    
}

void jogadas(char matriz[][TAMATRIZ], char tokens[]){
    int fim1=0;
    int fim2=0;
    int valorvalido=1;
    char coluna;
    int linha;
    int jogadas1=0;
    int jogadas2=0;
    
    //Loop para correr as jogadas seguidas pedindo as coordenadas e imprimindo a matriz alterada
    puts("");
    while(1){
        
        //Pede as coordenadas ao Jogador 1 e Verifica se é possivel fazer a jogada
        while(1){
            if(valorvalido==0){
                clean_buffer();
            }
            printf("Jogador 1 introduza a coluna: ");
            scanf("%c", &coluna);
            clean_buffer();
            printf("Jogador 1 introduza a linha: ");
            scanf("%d", &linha);
            valorvalido=checkjogadas(matriz,tokens[0],coluna,linha);
            if(valorvalido==0){
                continue;
            }
            else if(valorvalido==10){
                fim2+=1;
                break;
            }
            else{
                puts("");
                printMatriz(matriz);
                puts("");
                jogadas1+=1;
                fim1=vitoria(matriz,tokens[0]);
                break;
            }
            
        }
        
        //Para caso o jogador tenha Ganho o Jogo
        if(fim1>0){
            printf("O jogador 1 ganhou. Nr de jogadas: %d", jogadas1);
            break;
        }
        if(fim2>0){
            printf("O jogador 2 ganhou. Nr de jogadas: %d", jogadas2);
            break;
        }
        
        //Pede as coordenadas ao Jogador 2 e Verifica se é possivel fazer a jogada
        while(1){
            clean_buffer();
            printf("Jogador 2 introduza a coluna: ");
            scanf("%c", &coluna);
            clean_buffer();
            printf("Jogador 2 introduza a linha: ");
            scanf("%d", &linha);
            valorvalido=checkjogadas(matriz,tokens[1],coluna,linha);
            if(valorvalido==0){
                continue;
            }
            else if(valorvalido==10){
                fim1+=1;
                break;
            }
            else{
                puts("");
                printMatriz(matriz);
                puts("");
                jogadas2+=1;
                fim2=vitoria(matriz,tokens[1]);
                break;
            }
        }
        clean_buffer();
        
        //Para caso o jogador tenha Ganho o Jogo
        if(fim1>0){
            printf("O jogador 1 ganhou. Nr de jogadas: %d", jogadas1);
            break;
        }
        if(fim2>0){
            printf("O jogador 2 ganhou. Nr de jogadas: %d", jogadas2);
            break;
        }
        
        
    }
}

void criarMatriz(char matriz[][TAMATRIZ]){
    int i, j;
    int abc =65;
    int nums =49;
    
    //Preenche a posição 0,0 com espaço em branco
    matriz[0][0]= ' ';
    
    //Prrenche a primeira linha com letras começando por A
    for(i=1; i<TAMATRIZ; ++i){
        matriz[0][i]=abc;
        abc+=1;
    }
    
    //Prrenche a primeira coluna com numeros começando por 1
    for(i=1; i<TAMATRIZ; ++i){
        matriz[i][0]=nums;
        nums+=1;
    }
    //Prenche o resto com - 
    for(i=1; i< TAMATRIZ; ++i){
        for(j=1; j< TAMATRIZ; ++j){
            matriz[i][j]='-';
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
    char matriz[TAMATRIZ][TAMATRIZ];
    
    escolherTokens(tokens);
    criarMatriz(matriz);
    printMatriz(matriz);
    jogadas(matriz,tokens);
    
    return (EXIT_SUCCESS);
}

