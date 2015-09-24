#include "vector.h"

//Definiciones

void cargar_datos(Vector &par_vector){								//Carga los datos
//	FEDE
//	par_vector.lista.at(0) = 12;
//	par_vector.lista.at(1) = 21;
//	par_vector.lista.at(2) = 35;
//	par_vector.lista.at(3) = 45;
//	par_vector.lista.at(4) = 54;
//	par_vector.lista.at(5) = 62;
//	par_vector.lista.at(6) = 75;
//	par_vector.lista.at(7) = 88;
//	par_vector.lista.at(8) = 89;
//	par_vector.lista.at(9) = 95;
	par_vector.lista = {12,21,35,45,54,62,75,88,89,95};
	par_vector.top = 9;
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
	for (int i = 0; i < par_vector.top; i++){
		if (par_vector.lista.at(i) > par_vector.lista.at(i+1)){
			return false;
		}
	}
	return true;
	//FEDE
}
