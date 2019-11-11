/*
 *
 *
 *
 *
 */

#include "ponto.h"

Ponto coord_do_ponto(int x, int y)
{
  Ponto p;
  p * x = x;
  p * y = y;
  return p;
}

int pontox(Ponto p)
{
  return p * x;
}

int pontoy(Ponto p)
{
  return p * y;
}

int origem(Ponto p)
{
  if(p * x  == 0 && p * y == 0)
    return 1;
  else
    return 0;
}
