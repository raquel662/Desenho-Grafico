/*
 * main.c
 *
 *  Created on: 7 de nov de 2019
 *      Author: raquel
 */

#include <stdio.h>
#include <stdlib.h>

struct Imagem
{
	char tipo[2];
	int dimencao[100][100];
	int valor_maximoP;

};


/* code */
int main(int argc, char const *argv[])
{
	/* criar ponteiro que aponta em tipos de data file */
	FILE *imagem;

    /* code */
	imagem = fopen("imagem.ppm","r");

    /* Testa se a abertura do arquivo deu certo
    fopen retorna ponteiro pro arquivo em sucesso
    e nulo caso o contrario */
	if (imagem == NULL)
	{
		printf("Erro na abertura!!\n");
		exit(1);
	}

	return 0;
}

