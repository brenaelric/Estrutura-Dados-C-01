/*
 * li.c
 *
 *  Created on: 16 de jun de 2016
 *      Author: brena
 */
#include "lista01.h"
void lervetor(int *x, int tam)
{
  int i;
  printf("\nDigite os valores do vetor:\n");
  for(i=0; i<tam; i++)
  {
    printf("\nVetor[%d] = ? \n", i);
    scanf("%d", &x[i]);
  }
}

void imprimevetor(int vetor[], int taml)
{
  int i;
  for(i=0; i<taml; i++)
  {
    printf("%4d", vetor[i]);
  }
}
