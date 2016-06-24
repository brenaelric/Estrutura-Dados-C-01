/*
 * q05.c
 *
 *  Created on: 16 de jun de 2016
 *      Author: brena
 */
#include "lista01.h"

int maior(int v[], int taml)
{
	int m = v[0];
	int i;
	for(i=1; i<taml; i++)
		if(v[i]>m)
			m=v[i];
	return m;
}

void contarep(int v[], int taml, int *vrep, int trep)
{
	int i, n;
  for(i=0;i<trep;i++)
		vrep[i]=0;

  for(i=0; i<taml;i++)
	{
    n = v[i];
    vrep[n]++;
  }
}

int contaunicos(int *vrep, int trep)
{
  int i, n = 0;
  for(i=0;i<trep;i++)
    if(vrep[i]>0)
      n++;
  return n;
}

void removerep(int vrep[], int trep, int *vfinal)
{
  int i, n=0;
  for(i=0;i<trep;i++)
	  if(vrep[i]>0)
	  {
		  vfinal[n]=i;
		  n++;
	  }
}

int buscaBinaria (int vfinal[], int tfinal, int x)
{
	int e=0, m;
	while (e <tfinal)
	{
		m = (e + tfinal)/2;
		if (vfinal[m] == x)
			return m;
		if (vfinal[m] < x)
			e = m + 1;
		else tfinal = m - 1;
	}
	return -1;
}
