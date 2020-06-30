// Exercise_5.cpp : Desarrollo del ejercicio 5
// Curso: Programacion de Sistemas
// Laboratorio: B
// Autor: Carlos Alberto Mestas Escarcena
// Fecha: 30/06/2020

#include <iostream>
#include <fstream>
#include "Exceptions.h"

using namespace std;
int main(){
	system("color f0");
	bool y = false;
	do{
		try	{
			string fileNameText;
			cout << "\nIngrese el nombre del fichero para imprimirlo: \n";
			cin >> fileNameText;
			std::ifstream file(fileNameText);
			if (file.is_open()) {
				y = true;
				std::string line;
				while (std::getline(file, line)) {
					printf("%s", line.c_str());
				}
				file.close();
			}
			else{
				throw InputException("No se encontro el fichero ...");
			}
		}
		catch(InputException e){
			cerr <<	"Error:	" << e.mesage;	
		}
		
	}
	while(y == false);
	
	return 0;
}
