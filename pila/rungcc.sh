#!/bin/bash
#genero pila.o
gcc -Wall -g -pedantic -std=c99 -c pila.c


#genero el ejecutable prueba_pila.bin
gcc -Wall -g -pedantic -std=c99 pila.o prueba_pila.c -o prueba_pila.bin

