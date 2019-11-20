
#include <stdio.h>
#include <stdlib.h>
#include "gerarImagem.h"
#include "linha.h"

void gerarImagem(char nome[100],int linhas,int colunas,int r,int g, int b,Pixel desenho[linhas][colunas]){

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

	fprintf(imagem,"P3\n %i %i \n255 \n",linhas,colunas);

	 for (int j = 0; j < linhas; ++j)
    {
       for (int i = 0; i < colunas; ++i)
       {

            fprintf(imagem," %d %d %d \n",desenho[j][i].R,desenho[j][i].G,desenho[j][i].B);



       }
    }
    fclose(imagem);
	/* O for abaixo repete quantas vezes forem necessarias a cor
	de fundo da imagem
	*/

    //fclose(imagem);//Salva o arquivo
	//for (int i = 0; i < contCor; ++i)
	//{
	//	fprintf(imagem,"%s\n",cor);
	//}
}
