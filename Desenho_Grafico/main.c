/*
 * main.c
 *
 *  Created on: 7 de novembro ../ de 2019
 *      Author: raquel
 */

#include <stdio.h>
#include <stdlib.h>
#include "gerarImagem.h"
#include "linha.h"


int main(int argc, char const *argv[])
{

	char nome[100];//Variavel armazena o nome do arquivo
    int linhas = 0,colunas = 0,R = 0,G = 0,B = 0,x,x1,y,y1;//variaveis para as posições



    printf("Digite a cor da linha:  R G B\n");//Pede que o usuario digite a cor da linha
    scanf("%i %i %i", &R, &G, &B);
    printf("Digite a tamanho da imagem\n");//Pede que o usuario digite o tamanho da imagem
    scanf("%i %i",&linhas, &colunas);
    printf("Digite o nome do arquivo: 'exemplo.ppm' \n");//o nome do arquivo a ser criado
    scanf("%s",nome);
    printf("Digite a posição da linha na matriz: (x,y) (x1,y1)\n");// Pede a posição final e inicial da linha
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&x1);
    scanf("%i",&y1);

    Pixel desenho[linhas][colunas];

      for (int j = 0; j < linhas; ++j)
    {
      for (int i = 0; i < colunas; ++i)
        {
            desenho[j][i].R = 255;
            desenho[j][i].G = 15;
            desenho[j][i].B = 15;
        }
    }







    DesenharLinha(x,y,x1,y1,linhas,colunas,R,G,B,desenho);

    for (int j = 0; j < linhas; ++j)
    {
       for (int i = 0; i < colunas; ++i)
       {
            printf( "%i %i %i\n", desenho[j][i].R,  desenho[j][i].G, desenho[j][i].B);


       }
   }
    printf("Digite a cor da linha:  R G B\n");//Pede que o usuario digite a cor da linha
    scanf("%i %i %i", &R, &G, &B);
    printf("Digite a tamanho da imagem\n");//Pede que o usuario digite o tamanho da imagem
    scanf("%i %i",&linhas, &colunas);
    printf("Digite a posição da linha na matriz: (x,y) (x1,y1)\n");// Pede a posição final e inicial da linha
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&x1);
    scanf("%i",&y1);

    DesenharLinha(x,y,x1,y1,linhas,colunas,R,G,B,desenho);

    for (int j = 0; j < linhas; ++j)
    {
       for (int i = 0; i < colunas; ++i)
       {
            printf( "%i %i %i\n", desenho[j][i].R,  desenho[j][i].G, desenho[j][i].B);


       }
   }




    gerarImagem(nome,linhas,colunas,R,G,B,desenho);



	return 0;
}

