/*
 *
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "linha.h"

/* Function that returns -1,0,1 depending on whether x */
/* is <0, =0, >0 respectively */
int sign(int x){
  if (x>0){
    return 1;
  } else if (x<0){
    return -1;
  }
  return 0;
}


void DesenharLinha(int x1, int y1, int x2, int y2,int linhas, int colunas, int r,int g, int b,Pixel desenho[linhas][colunas]){
	//int x1 = 10, y1 = 10,x2 = 50,y2 = 50;*
  //struct pixel desenho[linhas][colunas];

  int dx, dy, x, y, d, s1, s2, swap=0, temp;

  dx = abs(x2 - x1);
  dy = abs(y2 - y1);
  s1 = sign(x2-x1);
  s2 = sign(y2-y1);

  /* Check if dx or dy has a greater range */
  /* if dy has a greater range than dx swap dx and dy */
  if(dy > dx){
    temp = dx;
    dx = dy;
    dy = temp;
    swap = 1;
  }

  /* Set the initial decision parameter and the initial point */
  d = 2 * dy - dx;
  x = x1;
  y = y1;

  for(int i = 1; i <= dx; i++) {

    desenho[x][y].R = r;
    desenho[x][y].G = g;
    desenho[x][y].B = b;

    while(d >= 0) {
      if(swap){
        x = x + s1;
      } else {
        y = y + s2;
        d = d - 2* dx;
      }
    }
    if(swap) y = y + s2;
    else x = x + s1;
     d = d + 2 * dy;
    }
   desenho[x][y].R = r;
   desenho[x][y].G = g;
   desenho[x][y].B = b;


  /* for (int j = 0; j < linhas; ++j)
  {
        for (int i = 0; i < colunas; ++i)
        {

           printf("%i %i %i \t ",desenho[j][i].R,desenho[j][i].G,desenho[j][i].B);


        }
    printf(" \n");
  }*/




}
