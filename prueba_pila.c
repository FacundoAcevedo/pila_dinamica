#include "pila.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


/* ******************************************************************
 *                        PRUEBAS UNITARIAS 
 * *****************************************************************/

/* Función auxiliar para imprimir si estuvo OK o no. */
void print_test(char* name, bool result) {
	printf("%s: %s\n", name, result? "OK" : "ERROR");
}

/* Prueba que la funcion pila_crear se ejecute correctamente. */
void prueba_pila() {
    
// Declaro las variables a utilizar
int val0;
int* pval0;
val0 = 0;
pval0 =&val0;

int val1;
val1 = 3331;

int* pval1;
pval1 = &val1;

char* val2;
val2 = "xxx";

// Comienzo de pruebas
puts("\n*** Pruebas basicas ***");

// Creo una pila
pila_t* pila;
print_test("1) Prueba pila_crear", (pila = pila_crear()));

// La pila esta vacia 
print_test("2) Prueba pila_esta_vacia (0 elemento)", pila_esta_vacia(pila));

// pila = [val0]
print_test("3) Prueba pila_apilar (entero)",pila_apilar(pila, pval0));  
print_test("4) Prueba pila_esta_vacia (1 elemento)", !pila_esta_vacia(pila));
print_test("5) Prueba ver tope VAL0", (int*)(pila_ver_tope(pila))==pval0);

// pila = [val0, val1]
print_test("6) Prueba pila_apilar (entero)",pila_apilar(pila, pval1));  
print_test("7) Prueba ver tope VAL1", (int*)(pila_ver_tope(pila))==pval1);

// pila = [val0, val1, val2]
print_test("8) Prueba pila_apilar (cadena)",pila_apilar(pila, val2));
/*printf("strcmp: %u\n", strcmp(pila_ver_tope(pila),val2));*/
print_test("9) Prueba ver tope VAL2", strcmp(pila_ver_tope(pila),val2)==0);


// pila = [val0, val1]
print_test("10) Prueba pila_desapilar (cadena)", strcmp(pila_desapilar(pila),val2)==0);
// pila = [val0] 
print_test("11) Prueba ver tope VAL1", *(int*)(pila_ver_tope(pila))==val1);
// pila = []
print_test("12) Prueba pila_desapilar (entero)", *(int *)pila_desapilar(pila)==val1);
// pila = []
print_test("13) Prueba pila_desapilar (entero)", *(int *)pila_desapilar(pila)==val0);
print_test("14) Prueba ver tope NULL", pila_ver_tope(pila)==NULL);
print_test("15) Prueba pila_desapilar (no de tiene que poder)", pila_desapilar(pila)==NULL);
print_test("16) Prueba esta vacia", pila_esta_vacia(pila));

pila_destruir(pila);
}


/* ******************************************************************
 *                        PROGRAMA PRINCIPAL
 * *****************************************************************/
//~ 
//~ /* Programa principal. */
int main(void) {
	//~ /* Ejecuta todas las pruebas unitarias. */
	prueba_pila();
	return 0;
}
