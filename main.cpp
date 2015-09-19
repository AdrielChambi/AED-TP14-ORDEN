#include <iostream>
#include <cstdlib>
#include <array>    // Se necesita activar C++11
#include "vector.h"

/* Trabajo Practico N14 - ORDENAMIENTO

REQUISITO:
Se necesita probar los diferentes tipos de ordenamiento:
- 1. Seleccion.
- 2. Insercion.
- 3. Burbuja.
- 4. quicksort

PRE-CONDICIONES:
El usuario no ingresa nada, el vector esta previamente cargado
por codigo.
El usuario solo debe ver si lo ordeno correctamente.

MATERIA:
Algoritmos y Estructura de Datos

INTEGRANTES:
Martin AGUEL
Adriel CHAMBI
Federico BUSTAMANTE
Augusto SCHMID

*/
using namespace std;

int main(int argc, char** argv) {
	//Declaraciones
	Vector var_vector;
	
	//Desarrollo
	for (unsigned i = 1; i <= 4; i++){
		cargar_datos(var_vector);
		ordenar_vector(var_vector,i);
		if(verificar_orden(var_vector)){
			cout<<"Ordenado Correcto"<<endl;
		}
		else{
			cout<<"Mal Ordenado"<<endl;
			break;
		}
	}
	
	return 0;
}
