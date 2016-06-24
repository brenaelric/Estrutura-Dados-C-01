#include "lista01.h"

int primo(int n)
{
  int i, j=1;
  if(n==0 || n==1)
	  return 0;
  for(i=2; i<=sqrt(n)+1; i++)
    if(n%i==0)
      j=0;
  return j==1;
}

void antprimo(int n)
{
  int i, j=0, count =0;

  if(primo(n))
  {
    for(i=n-1; i>=2; i--)
    {
      if(primo(i) && count<2)
        count++;
    }
  }

  int v[count];
    for(i=n-1; i>=2; i--)
    {
      if(primo(i))
      {
        v[j] = i;
        j++;
      }
      if(j>=count)
        break;
    }
  printf("\nOs dois primos antecessores são:\n");
  imprimevetor(v, count);
}

void sucprimo(int n)
{
  int i, j=0;
  int v[2];
    for(i=n+1; j<2; i++)
    {
      if(primo(i))
      {
        v[j] = i;
        j++;
      }
    }
  printf("\nOs dois primos antecessores são:\n");
  imprimevetor(v, 2);
}
