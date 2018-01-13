/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 7, 2017, 9:35 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAMPOS 2
#define TAMATRIZ 9
#define PECAS 2
#define VALORINCIAL -1
#define TAMANHO 25
int contador;

void guardarContador(){
    FILE *contadorFicheiro = fopen("contador.dat", "wb");
    fwrite(&contador, sizeof(int), 1, contadorFicheiro);
    fclose(contadorFicheiro);
    printf("Done!");
    puts(" ");
}
/*
void printMatriz(int matriz[][TAMATRIZ],char tokens[]){
    int i,j;
    int abc =65;
    
    //Imprime a primeira linha com as letras
    printf("  ");
    printf("|");
    for(i=0; i<TAMATRIZ; ++i){
        printf("%c", abc);
        printf("|");
        ++abc;
    }
    
    puts(" ");
    for(i=0; i< TAMATRIZ; ++i){
        //Imprime a primeira coluna com os numeros
        printf("%2d", i+1);
        printf("|");
        //Imprime a matriz
        for(j=0; j< TAMATRIZ; ++j){
            //Imprime as posiÃ§Ãµes vazias
            if(matriz[i][j]==VALORINCIAL){
                printf("-");
            }
            //Imprime as posiÃ§Ãµes do jogador 1
            else if(matriz[i][j]==0){
                printf("%c", tokens[0]);
            }
            //Imprime as posiÃ§Ãµes do jogador 2
            else if(matriz[i][j]==1){
                printf("%c", tokens[1]);
            }
            printf("|");
        }
        puts(" ");
    }
    
}
*/
/*
int verificarVitoria(int matriz[][TAMATRIZ], int quemjoga){
    int i,j;
    int numTokens;
    
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
        for(j=0; j<(TAMATRIZ - 2); j++){
             if(matriz[i][j+2]==quemjoga && matriz[i][j+2]==matriz[i+1][j+1] && matriz[i][j+2]==matriz[i+2][j]){
                 return 1;
             }
                 
        }
    }
    
    return 0;
}
*/
/*
int verificasJogadas(int matriz[][TAMATRIZ], char tokens[], char coluna, int linha, int quemjoga, int jogadas[], char nome1[TAMANHO], char nome2[TAMANHO]){
    int i,j;
    int abc = 65;
    int vitoria = 0;
    int numTokens = 0;
    
    //Se as letras tiverem em minuscula passa para Maiuscula
    if(coluna>=97){
        coluna-=32;
    }
    
    //Verifica se a posiÃ§Ã£o Ã© valida na Matriz
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
                    printf("%s ganhou. Numero de Jogadas: %d", quemjoga==0 ? nome1 : nome2,jogadas[quemjoga]);
                    return quemjoga+2;
                }
                //Se ninguem ganhou continua o jogo
                return abs(quemjoga-1);
            }
            else{
                printf("PosiÃ§Ã£o Ocupada.");
                return quemjoga;
            }
            
        }
    }
    
    //PosiÃ§Ã£o para desistir
    if(coluna=='Z' || coluna=='z'){
        if(linha==0){
            printf("%s ganhou. Numero de Jogadas: %d", quemjoga==0 ? nome2 : nome1 ,jogadas[abs(quemjoga-1)]);
            return quemjoga+2;            
        }
    }
    
    printf("PosiÃ§Ã£o Inexistente.");
    return quemjoga;
}
*/
/*
void jogadas(int matriz[][TAMATRIZ], char tokens[], char nome1[TAMANHO], char nome2[TAMANHO]){
    char coluna;
    int linha;
    int quemjoga=0;
    int jogadas[]={0,0};
    
    //Input para Jogadas
    do{
        puts("");
        printf("%s introduza a coluna: ", quemjoga==0 ? nome1 : nome2);
        scanf("%c", &coluna);
        clean_buffer();
        printf("%s introduza a linha: ", quemjoga==0 ? nome1 : nome2);
        scanf("%d", &linha);
        //Verifica as jogadas e troca para o jogador seguinte
        quemjoga=verificasJogadas(matriz,tokens,coluna,linha,quemjoga,jogadas,nome1,nome2);
        clean_buffer();
    }while(quemjoga<2);
    

}
*/
/*
void criarMatriz(int matriz[][TAMATRIZ]){
    int i, j;

    //Prenche a matriz com -1
    for(i=0; i< TAMATRIZ; ++i){
        for(j=0; j< TAMATRIZ; ++j){
            matriz[i][j]=VALORINCIAL;
        }
    }
    
}
*/
/*
void escolherTokens(char tokens[], char nome1[TAMANHO], char nome2[TAMANHO]){
    int i;
    
    //Premite a escolha dos tokens e guarda no array de chars
    for(i=0; i<PECAS; ++i){
        printf("%s escolha o seu token: ", i==0 ? nome1 : nome2 );
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
    
}*/

void nomes(int numJogadores, Jogadores RegJogadores[]){
    int i;
    
    clean_buffer();
    for(i = 0; i < numJogadores; ++i){
        printf("Nome do Jogador %d: ", i+1);
        lerString(RegJogadores[i].jogador, TAMANHO);
    }
    
}

int main(int argc, char** argv) {
    int opcao;
    char tokens[PECAS];
    int matriz[TAMATRIZ][TAMATRIZ];
    Jogadores *RegJogadores = NULL;
    contador = 0;
    
    //Ler Contador
    FILE *contadorFicheiro = fopen("contador.dat", "rb");
    if(contadorFicheiro != NULL){
       fread(&contador, sizeof(int), 1, contadorFicheiro); 
    }
    fclose(contadorFicheiro);
    
    printf("Contador : %d", contador);
    puts("");
    
    do{
        puts("Menu: ");
        puts("1- Jogador VS Jogador");
        puts("2- Jogador VS Computador");
        puts("3- Resultados dos Jogos");
        puts("4- Fechar o Programa");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                RegJogadores = (Jogadores *) malloc(PECAS * sizeof(Jogadores));
                nomes(PECAS,RegJogadores);
                //escolherTokens(tokens, nome1, nome2);
                //criarMatriz(matriz);
                //printMatriz(matriz,tokens);
                //jogadas(matriz,tokens, nome1, nome2);
                puts(" ");
                //++contador;
                guardarContador();
                break;
            case 2:
                printf("WIP");
                break;
            case 3:
                printf("WIP");
                break;
            case 4:
                printf("GoodBye");
                opcao=4;
                break;
            default :
                printf("Opcao Invalida");
        }
        puts(" ");
    }while(opcao != 4);
    
    
    
    return (EXIT_SUCCESS);
}
