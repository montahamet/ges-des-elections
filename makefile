prog:AD.o main.o
	gcc AD.o main.o -o prog
main.o:main.c
	gcc -c main.c
AD.o:AD.c
	gcc -c AD.c

