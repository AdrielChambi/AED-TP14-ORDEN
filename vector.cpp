#include "vector.h"

//Definiciones

void cargar_datos(Vector &par_vector){								//Carga los datos

	//FEDE

}

void ordenar_vector(Vector &par_vector, const unsigned &par_tipo){														//Odena el Vector
	switch (par_tipo){
		case 1:
			ordenar_selection(par_vector);
			break;
		case 2:
			ordenar_insert(par_vector);
			break;
		case 3:
			ordenar_burbuja(par_vector);
			break;
		case 4:
			ordenar_quick(par_vector);
			break;
	}
}

void ordenar_selection(Vector &par_vector){
	cout<<"Ordenado por Seleccion"<<endl;
	
	//FEDE
	
}

void ordenar_insert(Vector &par_vector){
	cout<<"Ordenado por Insercion"<<endl;
	
	//AUGUSTU
	
}

void ordenar_burbuja(Vector &par_vector){
	cout<<"Ordenado por Burbuja"<<endl;
	
	//MARTIN
	
}

void ordenar_quick(Vector &par_vector){
	cout<<"Ordenado por Quick"<<endl;
	
	//CHAMBI
	
}

bool verificar_orden(const Vector &par_vector){
	return true;
	
	//FEDE
	
}
