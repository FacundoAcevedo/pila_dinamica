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
val0 = 0;
int val1;
val1 = 1;
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
print_test("3) Prueba pila_apilar (entero)",pila_apilar(pila, val0));  
print_test("4) Prueba pila_esta_vacia (1 elemento)", !pila_esta_vacia(pila));
print_test("5) Prueba ver tope VAL0", *(int*)(pila_ver_tope(pila))==val0);

// pila = [val0, val1]
print_test("6) Prueba pila_apilar (entero)",pila_apilar(pila, val1));  
print_test("7) Prueba ver tope VAL1", *(int*)(pila_ver_tope(pila))==val1);

// pila = [val0, val1, val2]
print_test("8) Prueba pila_apilar (cadena)",pila_apilar(pila, val2));
print_test("9) Prueba ver tope VAL2", strcmp(pila_ver_tope(pila),val2));


// pila = [val0, val1]
print_test("10) Prueba pila_desapilar (cadena)", strcmp(pila_desapilar(pila),val2));
// pila = [val0] 
print_test("11) Prueba ver tope VAL1", *(int*)(pila_ver_tope(pila))==val1);
// pila = []
print_test("12) Prueba pila_desapilar (entero)", *(int *)pila_desapilar(pila)==val0);
//~ // pila = []
//~ print_test("12) Prueba pila_desapilar (entero)", *(int *)pila_desapilar(pila)==val0);

//Prueba de volumen
    //~ int i  = 0;
    //~ puts("\n*** Prueba de VOLUMEN ***");
    //~ for (i=0; i < 99; i++)
    //~ {
        //~ pila_apilar(pila, &i);
//~ 
    //~ }
    //~ print_test("Prueba elemento 99",*(int*)pila_ver_tope(pila)==99);
//~ 
    //~ for (i=98; i >0 ; i--)
    //~ {
        //~ pila_desapilar(pila);
    //~ }
//~ 
    //~ print_test("Prueba, elemento 0",*(int*)pila_desapilar(pila)==0);
    //~ print_test("Prueba si esta vacio",pila_esta_vacia(pila));
//~ 
    //~ //Destruyo las pilas
    //~ pila_destruir(pila);
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
