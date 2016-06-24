lista01.exe : lista01main.o q01.o q02.o q03.o q04.o q05.o utilitarios.o
	gcc -o lista01 lista01main.o q01.o q02.o q03.o q04.o q05.o utilitarios.o

lista01main.o : lista01main.c
	gcc -c lista01main.c

clean :
	rm *.o
