/*
 * q03.c
 *
 *  Created on: 16 de jun de 2016
 *      Author: brena
 */

#include "lista01.h"

void juntavetor(int v1[], int v2[], int *v3, int taml)
{
	int i, j;
	for(i=0, j=0; i<(2*taml); j++)
	{
		v3[i] = v1[j];
		i++;
		v3[i] = v2[j];
		i++;
	}

	imprimevetor(v3, (2*taml));
}

int pesquisa(int v[], int taml, int n)
{
	int i;
	for(i=0; i<taml; i++)
		if(v[i]==n)
			return i;
	return -1;
}
