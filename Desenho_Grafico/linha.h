/*
 *
 *
 *
 *
 */
#ifndef LINHA_H
#define LINHA_H


typedef struct pixel
{
	int R;
	int G;
	int B;

}Pixel;



void DesenharLinha(int x, int y, int x2, int y2,int linhas, int colunas,int r,int g,int b, Pixel desenho[linhas][colunas]);
#endif /* LINHA_H */
