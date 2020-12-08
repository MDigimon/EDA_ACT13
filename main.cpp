#include <iostream>
#include <stdlib.h>

#include "Clases.h"
#include "computadora.h"
#include "funciones.h"

using namespace std;

int main() {
	
	string opc, num;
	int f=1, g;
	Arreglo<Computadora> arr;
	Arreglo<Computadora*> buscar;
	Computadora* bus;
	Computadora temp = Computadora();
	while(f == 1){
		cout << "1.- Agregar Computadora al Inicio" << endl;
		cout << "2.- Agregar Computadora al Final" << endl;
		cout << "3.- Agregar Computadora en una Posicion" << endl;
		cout << "4.- Eliminar Computadora al Inicio" << endl;
		cout << "5.- Eliminar Computadora al Final" << endl;
		cout << "6.- Eliminar Computadora en una Posicion" << endl;
		cout << "7.- Numero de Computadoras" << endl;
		cout << "8.- Imprimir Computadoras" << endl;
		cout << "9.- Bucar Computadora" << endl;
		cout << "10.- Buscar Varias Computadoras" << endl;
		cout << "0.- Salir" << endl;
		getline(cin, opc);
		fflush(stdin);
		
		
		if(opc == "1"){
			if(capturar(temp) != -1)
				arr.insertar_inicio(temp);
			
		}
		
		else if(opc == "2"){
			if(capturar(temp) != -1)
				arr.insertar_final(temp);
		}
		else if(opc == "3"){
			cout << "Posicion: " ;
			getline(cin, num);
			g=1;
			for(size_t i=0; i<num.size(); i++){
				if(isdigit(num[i]) == 0){
					if(num[i] != 0){
						cout << "Posicion Invalida" << endl;
						system("pause");
						break;
						g = 0;
					}
				}
			}
			if(capturar(temp) != -1)
				arr.insertar(temp, stoi(num));
			
		}
		else if(opc == "4"){
			arr.eliminar_inicio();
			system("pause");
		}
		else if(opc == "5"){
			arr.eliminar_final();
			system("pause");
		}
		
		else if(opc == "6"){
			cout << "Posicion: " ;
			getline(cin, num);
			g=1;
			for(size_t i=0; i<num.size(); i++){
				if(isdigit(num[i]) == 0){
					if(num[i] != 0){
						cout << "Posicion Invalida" << endl;
						system("pause");
						break;
						g = 0;
					}
				}
			}
			if(g == 1){
				arr.eliminar(stoi(num));
				system("pause");
			}
		}
		else if(opc == "7"){
			cout << "Numero de Elementos: " << arr.size() << endl;
			system("pause");
		}
		else if(opc == "8"){
			for(size_t i=0; i < arr.size(); i++){
				cout << "Dato " << i+1 << ": " << arr[i] << endl;
			}
			system("pause");
		}
		else if(opc == "9"){
			cout << "Nombre: " ;
			getline(cin, num);
			
			temp.set_nombre(num);
			bus = arr.buscar(temp);
			if(bus != nullptr){
				cout << *bus << endl;
			}
			else{
				cout << "El Dato No Existe" << endl;
			}
		}
		else if(opc == "10"){
			
			cout << "Nombre: " ;
			getline(cin, num);
			temp.set_nombre(num);
			buscar = arr.buscar_todo(temp);
			if(buscar.size() > 0){
				for (size_t i = 0; i < buscar.size(); i++){
            		Computadora *c = buscar[i];
            		cout << *c << endl;
        		}
			}
			else{
				cout << "El Dato No Existe" << endl;
			}
		}
		else if(opc == "0"){
			cout << "FIN DEL PROGRAMA" << endl;
			f = 0;
		}
		else{
			cout << "DATO INCORRECTO" << endl;
		}

		cout << endl;
		if(f == 1){
			system("cls");
		}
	}
	
	
	
	return 0;
}
