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
	par_vector.lista = {45,21,13,93,63,54,75,33,88};
	par_vector.top = 9;
}

void mostrar_vector(Vector &par_vector){
	for (int i = 0; i < par_vector.top; i++){
		cout<<par_vector.lista.at(i)<<";";
	}
	cout<<endl<<endl;
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
	int temporal;
	for(int i=0; i<par_vector.top-1; i++){
		for(int j=i+1; j<par_vector.top; j++){
			if(par_vector.lista.at(j)<par_vector.lista.at(i)){
				temporal = 	par_vector.lista.at(j);
				par_vector.lista.at(j) = par_vector.lista.at(i);
				par_vector.lista.at(i) = temporal;
			}
		}
	}
	
	cout<<"Ordenada con seleccion:"<<endl;
	mostrar_vector(par_vector);
}

void ordenar_insert(Vector &par_vector){
	int temporal;
	for(int i=1; i<par_vector.top; i++){
		temporal = par_vector.lista.at(i);
		for(int j=i; (j>0)&&(temporal<par_vector.lista.at(j-1)); j--){
			par_vector.lista.at(j) = par_vector.lista.at(j-1);
			par_vector.lista.at(j-1) = temporal;
		}
	}
	
	cout<<"Ordenada con insercion:"<<endl;
	mostrar_vector(par_vector);
}

void ordenar_burbuja(Vector &par_vector){
	int temporal;
	for(int i=0; i<par_vector.top; i++){
		for(int j=par_vector.top-1; j>0; j--){
			if(par_vector.lista.at(j) < par_vector.lista.at(j-1)){
				temporal = par_vector.lista.at(j);
				par_vector.lista.at(j) = par_vector.lista.at(j-1);
				par_vector.lista.at(j-1) = temporal;
			}
		}
	}
	
	cout<<"Ordenada con burbuja:"<<endl;
	mostrar_vector(par_vector);
}

void qs(Vector &par_arreglo, int limite_izq, int limite_der){
	int izq,der,temporal,pivote;
	izq = limite_izq;
	der = limite_der;
	pivote = par_arreglo.lista.at((izq+der)/2);
	
	do{
		while(par_arreglo.lista.at(izq)<pivote && izq<limite_der)izq++;
		while(pivote<par_arreglo.lista.at(der) && der>limite_izq)der--;
		if(izq<=der){
			temporal=par_arreglo.lista.at(izq);
			par_arreglo.lista.at(izq)=par_arreglo.lista.at(der);
			par_arreglo.lista.at(der)=temporal;
			izq++;
			der--;
		}
	} while (izq<=der);
	if(limite_izq<der){qs(par_arreglo,limite_izq,der);}
	if(limite_der>izq){qs(par_arreglo,izq,limite_der);}
}

void ordenar_quick(Vector &par_vector){
	//CHAMBI
	//qs(par_vector.lista,0,par_vector.top);
	qs(par_vector,0,par_vector.top-1);
	
	cout<<"Ordenada con quick:"<<endl;
	mostrar_vector(par_vector);
}

bool verificar_orden(const Vector &par_vector){
	for (int i = 0; i < par_vector.top-1; i++){
		if (par_vector.lista.at(i) > par_vector.lista.at(i++)){
			return false;
		}
	}
	return true;
	//FEDE
}
