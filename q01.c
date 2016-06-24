#include "lista01.h"

void lervetor256(int *vetor, int taml)
{
  int i;
  printf("\nDigite os valores do vetor:\n");
  for(i=0; i<taml; i++)
  {
    printf("\nVetor[%d] = ? \n", i);
    scanf("%d", &vetor[i]);
    if(vetor[i]>=256)
    {
      printf("\nO numero digitado nao e valido, informe outro numero.\n");
      i--;
    }
  }
}

void ordenadec(int *vetor, int taml)
{
  int aux,i,j;
  for(j=0;j<taml-1;j++)
    for(i=j+1;i<taml;i++)
      if(vetor[i]>vetor[j])
      {
        aux=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux;
      }
  printf("\nO vetor ordenado e:\n");
  imprimevetor(vetor, taml);
}

void contaimp(int vetor[], int taml)
{
  int count=0, i;
  for(i=0; i<taml; i++)
    if(vetor[i]%2!=0)
      count++;

  printf("\n\nNo vetor informado existem %d numeros impares\n", count);
}

void contapar(int vetor[], int taml)
{
  int count=0, i;
  for(i=0; i<taml; i++)
    if(vetor[i]%2 ==0)
      count++;

  printf("\nNo vetor informado existem %d numeros pares\n", count);
}

void mediam50(int vetor[], int taml)
{
  int count=0, soma=0, media, i;
  for(i=0; i<taml; i++)
    if(vetor[i]%2!=0 && vetor[i]>50)
    {
      count++;
      soma = soma + vetor[i];
    }

    if(count == 0)
      printf("\nNao existe numeros impares maiores que 50\n");
    else
    {
      media = soma/count;
      printf("\nA media dos numeros impares maiores que 50 e %d\n", media);
    }
}
