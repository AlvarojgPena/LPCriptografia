#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "header.h"
#define TAMANHO 50

int tamanhoFrase = 0, cres = 0;
char fraseInserida[TAMANHO], frasePassada01[TAMANHO], frasePassada02[TAMANHO], fraseFinal[TAMANHO];

void inicializar(){

    for(int i = 0; i <= TAMANHO; i++){

        fraseInserida[i] = NULL;
        frasePassada01[i] = NULL;
        frasePassada02[i] = NULL;
        fraseFinal[i] = NULL;
        cres = 0;

    }

    tamanhoFrase = 0;

}

void menu(){

    printf("\nInforme a frase que será criptografada: ");
    fflush(stdin);
    gets(fraseInserida);

}

void medirFrase(){

    tamanhoFrase = strlen(fraseInserida);
    printf("Frase inserida: %s\n", fraseInserida);

}

void primeiraPassada(){

    for(int i = 0; i <= tamanhoFrase; i++){

        if((fraseInserida[i] > 64) && (fraseInserida[i] < 91)){
            frasePassada01[i] = fraseInserida[i] + 3;
        }
        else if((fraseInserida[i] > 96) && (fraseInserida[i] < 123)){
            frasePassada01[i] = fraseInserida[i] + 3;
        }
        else{
            frasePassada01[i] = fraseInserida[i];
        }

    }

    printf("Primeira passada: %s\n", frasePassada01);

}

void segundaPassada(){

    for(int dec = tamanhoFrase; dec >= 0; dec--){
        frasePassada02[cres] = frasePassada01[dec - 1];
        cres++;
    }
    printf("Segunda passada: %s\n", frasePassada02);
}

void ultimaPassada(){

    for(int amplo = 0; amplo < tamanhoFrase; amplo++){

        if(amplo >= tamanhoFrase / 2){
            fraseFinal[amplo] = frasePassada02[amplo] - 1;
        }
        else{
            fraseFinal[amplo] = frasePassada02[amplo];
        }
    }

    printf("Frase criptografada: %s\n\n", fraseFinal);

}
