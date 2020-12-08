#include "funciones.h"

int capturar(Computadora& comp){
	Computadora *temp = &comp;
	string dato_a, dato_b, dato_c;
	int entero;
	float flotante;
	
	cout << "Nombre: " ;
	getline(cin, dato_a);
	fflush(stdin);
	
	cout << "Sistema Operativo: " ;
	getline(cin, dato_b);
	fflush(stdin);
	
	cout << "Memoria Ram(GB): " ;
	getline(cin, dato_c);
	fflush(stdin);
	
	entero = comprobar_i(dato_c);
	if(entero != -1){
		cout << "Almacenamiento: " ;
		getline(cin, dato_c);
		fflush(stdin);
		flotante = comprobar_f(dato_c);
	}
	
	if(entero == -1 || flotante == -1){
		cout << "Dato Incorrecto" << endl;
		system("pause");
		return -1;
	}
	else{
		temp->set_nombre(dato_a);
		temp->set_so(dato_b);
		temp->set_ram(entero);
		temp->set_capacidad(flotante);
	}
	return 1;
}

int comprobar_i(string dato){
	int i, num;
	for(i=0; i < dato.size(); i++){
		if(isdigit(dato[i]) == 0){
			if((int)dato[i] != 0){
				cout << endl << "DATO INCORRECTO" << endl;
				system("pause");
				system("cls");
				return -1;
			}
		}
	}
	istringstream(dato) >> num;
	return num;
}

float comprobar_f(string dato){
	int i;
	float num;
	for(i=0; i < dato.size(); i++){
		if(isdigit(dato[i]) == 0){
			if((int)dato[i] != 0 && (int)dato[i] != 46){
				cout << endl << "DATO INCORRECTO" << endl;
				system("pause");
				system("cls");
				return -1;
			}
		}
	}
	istringstream(dato) >> num;
	return num;
}
