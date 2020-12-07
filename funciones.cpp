#include "funciones.h"

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
