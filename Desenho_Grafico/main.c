/*
 * main.c
 *
 *  Created on: 7 de nov de 2019
 *      Author: raquel
 */

#include <stdio.h>
#include <stdlib.h>
#include "gerarImagem.h"

int main(int argc, char const *argv[])
{

	char nome[100];
    int linha,coluna,R,G,B;



    printf("Digite a cor da imagem na sequencia: R G B\n");
    scanf("%i %i %i", &R, &G, &B);
    printf("Digite a tamanho da imagem\n");
    scanf("%i %i",&linha, &coluna);
    printf("Digite o nome do arquivo: 'exemplo.ppm' \n");
    scanf("%s",nome);
    int matizImagem[linha][coluna];


    gerarImagem(nome,linha,coluna,R,G,B);








	return 0;
}

