/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on December 7, 2017, 9:35 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAMPOS 2
#define TAMATRIZ 9
#define PECAS 2
#define VALORINCIAL -1
#define TAMANHO 25


//Ler informaçoes do Ficheiro
void lerFicheiro(Jogadores RegJogadoresTotais[], int contador){
    int i=0;

    FILE *ficheiro = fopen("BD.dat", "rb");
    for(i = 0; i < contador; ++i) {
        fread(&RegJogadoresTotais[i], sizeof(Jogadores), 1, ficheiro);
    }
    fclose(ficheiro);
    free(ficheiro);

}

//Pesuisa Jogadores
int pesquisaJogador(Jogadores RegJogadores[], Jogadores RegJogadoresTotais[], int *contador, int posicao){
    int i;
   
    for(i = 0 ; i < *contador; ++i) {
        if (strcmp(RegJogadoresTotais[i].jogador, RegJogadores[posicao].jogador) == 0){
            return i;
        }
    }
    return -1;
}


//Imprimir Tabela
void imprimirLista(Jogadores RegJogadoresTotais[], int *contador) {
    int i;
    puts("");
    printf("Nome      |");
    printf("Jogos     |");
    printf("Pontos    |");
    puts("");
    for (i=0; i  < *contador; ++i) {
        printf("%-10s|", RegJogadoresTotais[i].jogador);
        printf("%-10d|", RegJogadoresTotais[i].jogos);
        printf("%-10d|", RegJogadoresTotais[i].pontos);
        puts("");
    }
}

//guardar informações no ficheiro
void guardarFicheiro(Jogadores RegJogadores[], Jogadores RegJogadoresTotais[], int *contador,int *jogadoresIguais){
    int i, pesquisa = -1, posicaonova, contadorAntigo = 0;
    
    //Ler Contador antes do novo jogo
    FILE *contadorFicheiro = fopen("contador.dat", "rb");
    if(contadorFicheiro != NULL){
       fread(&contadorAntigo, sizeof(int), 1, contadorFicheiro); 
    }
    fclose(contadorFicheiro);
     
    //adicionar jogos aos players
    for(i = 0; i < 2; ++i) {
        RegJogadores[i].jogos = RegJogadores[i].jogos + 1;
    }
    
    //se existirem jogadores com o mesmo nome alterar os valores de vitorias e jogos
    if( *jogadoresIguais > 0){
        //Carrega BD
        RegJogadoresTotais= (Jogadores *) malloc((contadorAntigo) * sizeof(Jogadores));
        lerFicheiro(RegJogadoresTotais,(contadorAntigo));
        //procura as posições em que os jogadores tem o mesmo nome e guarda os seus dados
        for(i = 0; i < 2; ++i){
            pesquisa=pesquisaJogador(RegJogadores,RegJogadoresTotais,&contadorAntigo,i);
            if(pesquisa!=-1){
                RegJogadoresTotais[pesquisa].jogos = RegJogadoresTotais[pesquisa].jogos + RegJogadores[i].jogos;
                RegJogadoresTotais[pesquisa].pontos = RegJogadoresTotais[pesquisa].pontos + RegJogadores[i].pontos;
                pesquisa = -1;
                continue;
            }
            if(*jogadoresIguais==1){
                posicaonova = i;
            }
        }
        //guarda os jogadores ja existentes
        FILE *ficheiro = fopen("BD.dat", "wb");
        for(i = 0; i < (contadorAntigo); ++i) {
            fwrite(&RegJogadoresTotais[i], sizeof(Jogadores), 1, ficheiro);
        }
        fclose(ficheiro);
        
        //guarda o novo jogador
        if(*jogadoresIguais == 1){
           FILE *ficheiro1 = fopen("BD.dat", "ab");
            fwrite(&RegJogadores[posicaonova], sizeof(Jogadores), 1, ficheiro1);
            fclose(ficheiro1); 
        }
       
        free(RegJogadoresTotais);
        RegJogadoresTotais = NULL;
    }
    else{
        FILE *ficheiro2 = fopen("BD.dat", "ab");
        for(i = 0; i < 2; ++i) {
            fwrite(&RegJogadores[i], sizeof(Jogadores), 1, ficheiro2);
        }
        fclose(ficheiro2);
    }
    
}

//Função para guardar o contador dos jogadores
void guardarContador(int contador){
    FILE *contadorFicheiro = fopen("contador.dat", "wb");
    fwrite(&contador, sizeof(int), 1, contadorFicheiro);
    fclose(contadorFicheiro);
    printf("Done!");
    puts(" ");
}

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


int verificasJogadas(int matriz[][TAMATRIZ], char tokens[], char coluna, int linha, int quemjoga, int jogadas[], Jogadores RegJogadores[]){
    int i,j;
    int abc = 65;
    int vitoria = 0;
    int numTokens = 0;
    
    //Empate
    if( (jogadas[0] + jogadas[1]) == (TAMATRIZ * TAMATRIZ)){
        RegJogadores[0].pontos = RegJogadores[0].pontos + 1;
        RegJogadores[1].pontos = RegJogadores[1].pontos + 1;
        return quemjoga+2;
    }
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
                    printf("%s ganhou. Numero de Jogadas: %d", quemjoga==0 ? RegJogadores[0].jogador : RegJogadores[1].jogador,jogadas[quemjoga]);
                    //guardar vitoria
                    RegJogadores[quemjoga].pontos = RegJogadores[quemjoga].pontos + 3;
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
            //Contador para as jogadas realizadas
            jogadas[quemjoga]+=1;
            printf("%s ganhou. Numero de Jogadas: %d", quemjoga==0 ? RegJogadores[1].jogador : RegJogadores[0].jogador ,jogadas[abs(quemjoga-1)]);
            //Guardar Vitoria
            RegJogadores[abs(quemjoga-1)].pontos = RegJogadores[abs(quemjoga-1)].pontos + 3;
            return quemjoga+2;            
        }
    }
    
    printf("PosiÃ§Ã£o Inexistente.");
    return quemjoga;
}

//Jogadas Dos jogadores
void jogadas(int matriz[][TAMATRIZ], char tokens[], Jogadores RegJogadores[]){
    char coluna;
    int linha;
    int quemjoga=0;
    int jogadas[]={0,0};
    
    //Input para Jogadas
    do{
        puts("");
        printf("%s introduza a coluna: ", quemjoga==0 ? RegJogadores[0].jogador : RegJogadores[1].jogador);
        scanf("%c", &coluna);
        clean_buffer();
        printf("%s introduza a linha: ", quemjoga==0 ? RegJogadores[0].jogador : RegJogadores[1].jogador);
        scanf("%d", &linha);
        //Verifica as jogadas e troca para o jogador seguinte
        quemjoga=verificasJogadas(matriz,tokens,coluna,linha,quemjoga,jogadas,RegJogadores);
        clean_buffer();
    }while(quemjoga<2);
    

}

//Cria a Matriz
void criarMatriz(int matriz[][TAMATRIZ]){
    int i, j;

    //Prenche a matriz com -1
    for(i=0; i< TAMATRIZ; ++i){
        for(j=0; j< TAMATRIZ; ++j){
            matriz[i][j]=VALORINCIAL;
        }
    }
    
}

//Premite Escolher tokens
void escolherTokens(char tokens[], Jogadores RegJogadores[]){
    int i;
    
    //Premite a escolha dos tokens e guarda no array de chars
    for(i=0; i<PECAS; ++i){
        printf("%s escolha o seu token: ", RegJogadores[i].jogador);
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

//função de dar nomes ao jogadores
void nomes(int numJogadores, Jogadores RegJogadores[], Jogadores RegJogadoresTotais[], int *contador, int *jogadoresIguais){
    int i, pesquisa = -1;
    
    clean_buffer();
    for(i = 0; i < numJogadores; ++i){
        printf("Nome do Jogador %d: ", i+1);
        lerString(RegJogadores[i].jogador, TAMANHO);
        RegJogadores[i].pontos = 0;
        RegJogadores[i].jogos = 0;
        //Verificar se o jogador já existe
        if(*contador > 1){
            RegJogadoresTotais= (Jogadores *) malloc(*contador * sizeof(Jogadores));
            lerFicheiro(RegJogadoresTotais,*contador);
            pesquisa=pesquisaJogador(RegJogadores,RegJogadoresTotais,contador,i);
            free(RegJogadoresTotais);
            RegJogadoresTotais = NULL;
            if(pesquisa!=-1){
                pesquisa=-1;
                ++*jogadoresIguais;
                continue;
            }
            ++*contador; 
        }
        else{
            ++*contador;  
        }
        
    } 
}

int main(int argc, char** argv) {
    int opcao;
    char tokens[PECAS];
    int matriz[TAMATRIZ][TAMATRIZ];
    Jogadores *RegJogadores = NULL;
    Jogadores *RegJogadoresTotais = NULL;
    int contador = 0;
    int jogadoresIguais = 0;
    
    //Ler Contador de jogadores existentes
    FILE *contadorFicheiro = fopen("contador.dat", "rb");
    if(contadorFicheiro != NULL){
       fread(&contador, sizeof(int), 1, contadorFicheiro); 
    }
    fclose(contadorFicheiro);
    
    
    do{
        printf("Contador : %d", contador);
        puts("");
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
                nomes(PECAS,RegJogadores,RegJogadoresTotais,&contador,&jogadoresIguais);
                escolherTokens(tokens, RegJogadores);
                criarMatriz(matriz);
                printMatriz(matriz,tokens);
                jogadas(matriz,tokens, RegJogadores);
                guardarFicheiro(RegJogadores,RegJogadoresTotais,&contador,&jogadoresIguais);
                puts(" ");
                guardarContador(contador);
                jogadoresIguais = 0;
                break;
            case 2:
                printf("WIP");
                break;
            case 3:
                if( contador == 0){
                    printf("Nenhum Jogo ainda realizado.");
                    break;
                }
                RegJogadoresTotais= (Jogadores *) malloc(contador * sizeof(Jogadores));
                lerFicheiro(RegJogadoresTotais, contador);
                imprimirLista(RegJogadoresTotais, &contador);
                free(RegJogadoresTotais);
                RegJogadoresTotais = NULL;
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

