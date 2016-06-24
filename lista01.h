#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//prot�tipos Q01
void lervetor256 (int *v, int taml);
void imprimevetor(int v[], int taml);
void ordenadec(int v[], int taml);
void contaimp(int v[], int taml);
void contapar(int v[], int taml);
void mediam50(int v[], int taml);

//prot�tipos Q02
void lervetor(int v[], int taml);
int tamy(int v[], int taml);
void vetory(int v[], int taml, int *y);
void vetorw(int v[], int taml, int *w);
void pesquisaz(int v[], int taml);
void maiormenor(int v[], int taml);

//prot�tipos Q03
void juntavetor(int v1[], int v2[], int *v3, int taml);
int pesquisa(int v[], int taml, int n);

//prot�tipos Q04
int primo(int n);
void antprimo(int n);
void sucprimo(int n);

//prot�tipos Q05
int maior(int v[], int taml);
void contarep(int v[], int taml, int *vrep, int trep);
int contaunicos(int *vrep, int trep);
void removerep(int vrep[], int trep, int *vfinal);
int buscaBinaria (int vfinal[], int tfinal, int x);
