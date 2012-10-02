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
int valor1 = 3;
char *cadena1 = "pizza conmigo";


// Comienzo de pruebas
puts("\n*** Pruebas basicas ***");

// Creo una pila
pila_t* pila;
print_test("Prueba pila_crear", pila = pila_crear());

// La pila esta vacia 
print_test("Prueba pila_esta_vacia (0 elemento)", pila_esta_vacia(pila));
print_test("Prueba pila_apilar (entero)",pila_apilar(pila, &valor1));  
print_test("Prueba pila_esta_vacia (1 elemento)", !pila_esta_vacia(pila));
void* tope;
tope = pila_ver_tope(pila);
printf("tope: %p ", tope);
//~ print_test("Prueba ver tope", (int)tope==valor1);
//~ print_test("Prueba pila_apilar (cadena)",pila_apilar(pila, cadena1));
//~ print_test("Prueba pila_desapilar (cadena)", !strcmp(pila_desapilar(pila),cadena1));
//~ print_test("Prueba pila_desapilar (entero)", *(int *)pila_desapilar(pila)==3);

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
