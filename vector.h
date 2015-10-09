#ifndef _vector_h
#define _vector_h

#include <iostream>
#include <array>    // Se necesita activar C++11

using namespace std;

//DECLARACIONES:

struct Vector {														//Tipo de Dato Vector
	array<int,100> lista;
	unsigned top;
};

void cargar_datos(Vector &par_vector);															//Carga los datos
void mostrar_vector(Vector &par_vector);
void ordenar_vector(Vector &par_vector, const unsigned &par_tipo);								//Odena el Vector
void ordenar_selection(Vector &par_vector);
void ordenar_insert(Vector &par_vector);
void ordenar_burbuja(Vector &par_vector);
void ordenar_quick(Vector &par_vector);
bool verificar_orden(const Vector &par_vector);

#endif
