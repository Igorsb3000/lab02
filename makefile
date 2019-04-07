#Makefile QUESTAO 01

exe:	lab2_main_teste.o	lab2_corpo_teste.o	lab2_funcoes_teste.o	
	g++	-o	exe	-Wall	-ansi	-pedantic	-pg	lab2_main_teste.cpp	lab2_corpo_teste.o	lab2_funcoes_teste.o	-std=c++11

lab2_main_teste.o:	lab2_main_teste.cpp	lab2_teste.h
	g++	-Wall	-ansi	-pedantic	-g	-O0	-pg	-c	lab2_main_teste.cpp	-std=c++11

lab2_corpo_teste.o:	lab2_corpo_teste.cpp	lab2_teste.h
	g++	-Wall	-ansi	-pedantic	-g	-O0	-pg	-c	lab2_corpo_teste.cpp	-std=c++11

lab2_funcoes_teste.o:	lab2_funcoes_teste.cpp	lab2_teste.h
	g++	-Wall	-ansi	-pedantic	-g	-O0	-pg	-c	lab2_funcoes_teste.cpp	-std=c++11

clean:
	rm -rf *.o
