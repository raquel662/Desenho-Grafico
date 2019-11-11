/*
 * gerarImagem.c
 *
 *  Created on: 9 de nov de 2019
 *      Author: raquel
 */
#include <stdio.h>
#include <stdlib.h>
#include "gerarImagem.h"

void gerarImagem(char nome[100],int linha,int coluna,int r,int g, int b){
	int tamanho[linha][coluna];
	FILE *imagem;// criar ponteiro que aponta em tipos de data file


	imagem = fopen(nome, "wb");


	 /* Testa se a abertura do arquivo deu certo
    fopen retorna ponteiro pro arquivo em sucesso
    e nulo caso o contrario */
	if (imagem == NULL)
	{
		printf("Erro na abertura!!\n");
		exit(1);
	}

	fprintf(imagem,"P3\n %i %i \n255 \n",linha,coluna);



	struct cor
	{
		int R;
		int G;
		int B;

	};
	struct cor cores = {r,g,b};
	/* O for abaixo repete quantas vezes forem necessarias a cor
	de fundo da imagem
	*/
	for (int j = 0; j < linha; ++j)
    {
       for (int i = 0; i < coluna; ++i)
       {
            fprintf(imagem, "%i %i %i\n", cores.R,cores.G,cores.B);


       }
   }
   fclose(imagem);//fechar o arquivo

}
