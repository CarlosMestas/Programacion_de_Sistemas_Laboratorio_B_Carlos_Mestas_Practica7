// Exercise_1.cpp : Desarrollo del ejercicio 1
// Curso: Programacion de Sistemas
// Laboratorio: B
// Autor: Carlos Alberto Mestas Escarcena
// Fecha: 26/06/2020

#include <iostream>
#include <cstring>	

using namespace std;
/*
// Clase para la exepcion
class	MyException	{
public:
	// Almacenara el mensaje de error
	char msg[40];
	MyException(){
		*msg = 0;	
	}
	MyException(const char *msg2) {
		strcpy(this->msg, msg2);
	}
};

// Funcion principal
int	main()	{
	system("color f0");
	double div1; // Dividendo
	double div2; // Divisor
	cout << "Ingrese el dividendo: ";
	cin >> div1;
	try	{
		cout << "Ingrese el divisor: ";
		cin >> div2;
		// En caso de que el divisor sea 0
		if(div2 == 0){
			throw MyException("El divisor no puede ser cero ...");
		}
		// En caso de que se pueda realizar la division
		else {
			cout << "El resultado de la divison es: " << (div1 / div2);
		}
	}
	catch(MyException	e)	{
		cerr <<	"Error:	" << e.msg;
	}
	return	0;
}
*/
