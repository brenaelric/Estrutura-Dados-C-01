#include "lista01.h"

int tamy(int x[], int tam)
{
  int i, count=0;
  for(i=0; i<tam; i++)
    if(x[i]>10 && x[i]<40)
      count++;

  return count;
}

void vetory(int x[], int tam, int *y)
{
  int i, j;

  for(i=0, j=0; i<tam; i++)
    if(x[i]>10 && x[i]<40)
    {
      y[j]=x[i];
      j++;
    }
}

void vetorw(int x[], int tam, int *w)
{
  int i, j;

  for(i=0, j=0; i<tam; i+=2)
    {
      w[j]=x[i];
      j++;
    }
}

void pesquisaz(int x[], int tam)
{
  int z, i, count=0;
  printf("\nDigite o valor que deseja procurar:\n");
  scanf("%d", &z);

  for(i=0; i<tam; i++)
    if(z==x[i])
      count++;

  if(count>0)
    printf("\nO vetor possui o valor informado\n");
  else
    printf("\nO vetor nao possui o valor informado\n");
}

void maiormenor(int x[], int tam)
{
  int i, maior =x[0], menor=x[0];
  for (i=0; i<tam; i++)
  {
    if(x[i]>maior)
      maior = x[i];
    if(x[i]<menor)
      menor = x[i];
  }

  printf("\nO maior numero do vetor e %d\n", maior);
  printf("\nO menor numero do vetor e %d\n", menor);
}
