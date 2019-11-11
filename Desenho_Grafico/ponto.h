/*
 *
 *
 *
 *
 */

#ifndef PONTO_H_
#define PONTO_H_


typedef struct ponto {
	int x;
	int y;
} Ponto;

Ponto coord_do_ponto(int x, int y);
int pontox(Ponto p);
int pontoy(Ponto p);
int origem(Ponto p);



#endif /* PONTO_H_ */
