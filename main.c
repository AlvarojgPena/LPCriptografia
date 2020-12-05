#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "header.h"
#define TAMANHO 50


int contNcont;

int main()
{
    setlocale(LC_ALL, "portuguese");

    do{
    inicializar();
    menu();
    medirFrase();
    primeiraPassada();
    segundaPassada();
    ultimaPassada();
    printf("Digite 0 para sair.\nDigite qualquer tecla para continuar.\n");
    scanf("%d", &contNcont);
    }while(contNcont != 0);

}


