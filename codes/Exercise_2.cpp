// Exercise_2.cpp : Desarrollo del ejercicio 2
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
	MyException(const char *msg2){
		strcpy(this->msg, msg2);
	}
};

// Funcion que capturara el error y devolvera al main
void throwExceptionDivisionByZero(double _divisor){
	try{
		if(_divisor == 0){
			throw MyException("El divisor no puede ser cero ...");
		}
	}
	catch(MyException	e)	{
		cerr <<	"Paso del error a la funcion main \n";
		throw;
	}
	
}
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
		// En caso de que el divisor sea 0 o negativo
		if(div2 <= 0){
			throwExceptionDivisionByZero(div2);
		}
		// En caso de que se pueda realizar la division
		else {
			cout << "El resultado de la divison es: " << (div1 / div2);
		}
	}
	catch(MyException	e)	{
		cerr <<	"Error en el main:	" << e.msg << "\n";
	}
	return	0;
}
*/
