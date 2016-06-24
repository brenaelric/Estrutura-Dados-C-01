/*
 * lista01main.c
 *
 *  Created on: 17 de jun de 2016
 *      Author: brena
 */

#include "lista01.h"

void q01(int taml, int i)
{
	for (i = 0; i < 1; i++)
	{
		printf("\nDigite o tamanho do vetor de ate 100 posicoes\n");
		scanf("%d", &taml);
		if (taml > 100)
		{
			printf("\nTamanho invalido\n");
			i--;
		}
	}

	int vetor[taml];
	lervetor256(vetor, taml);
	printf("O vetor informado e:\n");
	imprimevetor(vetor, taml);
	ordenadec(vetor, taml);
	contaimp(vetor, taml);
	contapar(vetor, taml);
	mediam50(vetor, taml);
}

void q02(int taml)
{
	printf("\nDigite o tamanho do vetor\n");
	scanf("%d", &taml);
	int x[taml];
	lervetor(x, taml);
	printf("O vetor x informado e:\n");
	imprimevetor(x, taml);
	int ty = tamy(x, taml);
	int y[ty];
	int tw = (taml + 1) / 2;
	int w[tw];
	vetory(x, taml, y);
	printf("O vetor y e:\n");
	imprimevetor(y, ty);
	vetorw(x, taml, w);
	printf("O vetor w e:\n");
	imprimevetor(w, tw);
	pesquisaz(x, taml);
	maiormenor(x, taml);
}

void q03(int i, int taml, int n)
{
	for (i = 0; i < 1; i++)
	{
		printf("\nDigite o tamanho dos vetores\n");
		scanf("%d", &taml);
	}
	int v1[taml];
	int v2[taml];
	int v3[2 * taml];
	printf("\nVetor A:\n");
	lervetor(v1, taml);
	printf("\nO vetor A e:\n\n");
	imprimevetor(v1, taml);
	printf("\n\nVetor B:\n");
	lervetor(v2, taml);
	printf("\nO vetor B e:\n\n");
	imprimevetor(v2, taml);
	printf("\n\nO vetor resultante C e:\n");
	juntavetor(v1, v2, v3, taml);
	printf("\nDigite um numero:\n");
	scanf("%d", &n);
	if (pesquisa(v3, 2 * taml, n))
		printf("\nO numero %d existe no vetor C.\n", n);
	else
		printf("\nO numero %d nao existe no vetor C.\n", n);
}

void q04(int valido, int n)
{
	while (!valido) //o codigo s� acaba quando o numero digitado for primo
	{
		printf("Digite um numero:\n");
		scanf("%d", &n);
		if (primo(n))
		{
			printf("E primo\n");
			antprimo(n);
			sucprimo(n);
			valido = 1;
		}
		else
		{
			printf("O numero nao e primo, tente ou travez\n");
		}
	}
}

void q05(int taml, int n)
{
	printf("\nDigite o tamanho do vetor\n");
	scanf("%d", &taml);
	int v[taml];
	lervetor(v, taml);
	printf("\nO vetor informado e:\n");
	imprimevetor(v, taml);

	int m = maior(v, taml) +1;
	int vrep[m];
	contarep(v, taml, vrep, m);

	int tfinal = contaunicos(vrep, m);
	int vfinal[tfinal];

	removerep(vrep, m, vfinal);
	printf("\nO vetor sem repeticoes e:\n");
	imprimevetor(vfinal, tfinal);

	printf("\nDigite um numero:\n");
	scanf("%d", &n);

	int x = buscaBinaria(vfinal, tfinal, n);
	if(x<=0)
		printf("\nO numero %d nao esta no vetor\n", n);
	else
		printf("\nO numero %d esta na posicao %d do vetor\n", n, x);
}

int main()
{
	int a, i, z, n, fim = 0, taml, valido = 0;

	while (!fim)
	{
		//system("cls");
		printf("IFCE - Engenharia de Telecomunicacoes\n");
		printf("Estrutura de Dados\n");
		printf("Prof. Ernani\n");
		printf("Aluna: Brena Kesia\n");
		printf("Lista 01\n");
		printf("\n\n");
		printf("Escolha a questao:\n\n");
		printf("QUESTAO 01 - 1\n");
		printf("QUESTAO 02 - 2\n");
		printf("QUESTAO 03 - 3\n");
		printf("QUESTAO 04 - 4\n");
		printf("QUESTAO 05 - 5\n");
		printf("SAIR - 6\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			q01(taml, i);
			break;

		case 2:
			q02(taml);
			break;

		case 3:
			q03(i, taml, n);
			break;

		case 4:
			q04(valido, n);
			break;

		case 5:
			q05(taml, n);
			break;

		case 6:
			fim = 1;
		}
		system("pause");
	}
}
