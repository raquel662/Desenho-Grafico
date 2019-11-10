/*
 * gerarImagem.c
 *
 *  Created on: 9 de nov de 2019
 *      Author: raquel
 */

void gerarImagem(nome[100],tamanho[1000][1000],cor[3]){
	FILE *imagem;
	//char nome[13] = "raqueeEl.ppm";
	imagem = fopen(nome, "w");

	fprintf(imagem,"P3\n %s \n 255 \n %s",tamanho,cor);
}
