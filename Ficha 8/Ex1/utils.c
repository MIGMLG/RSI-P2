#include <stdio.h>
#include <string.h>
#include "utils.h"
#define TAMANHO 25

void clean_buffer(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

int lerString(char *string, int max){
    if (fgets(string, max, stdin) != NULL) {         
        int tamanho = strlen(string) - 1;         
        if (string[tamanho] == '\n') { string[tamanho] = '\0'; }          
        else{ clean_buffer(); }         
        return 1;     
    }      
    return 0;
}

void countChar(char array[], char letra){
    int i, contador = 0;
    for(i=0; i<TAMANHO; ++i){
        if(array[i]==letra){
            contador+=1;
        }
    }
    printf("Existem %d letras \"%c\" na frase.", contador, letra);
}

int lastIndex(char letra, char array[], int fimarray){
    int i, posicao=-1;
    
    for(i=0; i<fimarray; ++i){
        if(array[i]==letra){
            posicao=i;
        }
    }
    
    return posicao;
}
