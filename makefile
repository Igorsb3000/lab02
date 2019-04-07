#Makefile QUESTAO 01

exe:	lab2_main.o	lab2_corpo.o	lab2_funcoes.o	
	g++	-o	exe	-Wall	-ansi	-pedantic	-pg	lab2_main.cpp	lab2_corpo.o	lab2_funcoes.o	-std=c++11

lab2_main.o:	lab2_main.cpp	lab2.h
	g++	-Wall	-ansi	-pedantic	-g	-O0	-pg	-c	lab2_main.cpp	-std=c++11

lab2_corpo.o:	lab2_corpo.cpp	lab2.h
	g++	-Wall	-ansi	-pedantic	-g	-O0	-pg	-c	lab2_corpo.cpp -std=c++11

lab2_funcoes.o:	lab2_funcoes.cpp	lab2.h
	g++	-Wall	-ansi	-pedantic	-g	-O0	-pg	-c	lab2_funcoes.cpp -std=c++11

clean:
	rm -rf *.o
