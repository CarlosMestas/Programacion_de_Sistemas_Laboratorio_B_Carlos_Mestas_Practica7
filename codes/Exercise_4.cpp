// Exercise_4.cpp : Desarrollo del ejercicio 4
// Curso: Programacion de Sistemas
// Laboratorio: B
// Autor: Carlos Alberto Mestas Escarcena
// Fecha: 26/06/2020

#include <iostream>
#include <cstring>	
#include <math.h>

using namespace std;

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
int	main() {
	system("color f0");
	double A;
	double B;
	double C;
	cout << "RAINCES CUADRADAS DE UNA ECUACION \n";
	cout << "Ingrese el coeficiente para A: ";
	cin >> A;
	try	{
		// En el caso de que el coeficiente de A sea 0 no se trataria de
		// una ecuacion cuadratica
		if(A == 0){
			throw MyException("El coeficiente A no puede ser 0 ...");
		}
		cout << "Ingrese el coeficiente para B: ";
		cin >> B;
		cout << "Ingrese el coeficiente para C: ";
		cin >> C;
		// Calculamos la determinante
		double D = pow(B,2) - 4 * A * C;
		if(D < 0){
			throw MyException("Sus raices no son reales ...");
		}
		// En caso de que se pueda realizar la division
		else {
			cout << "Raices: \n";
			cout << "X1 = " << (-B + pow(D,0.5)) / 2 << "\n";
			cout << "X2 = " << (-B - pow(D,0.5)) / 2 << "\n";
		}
	}
	catch(MyException	e)	{
		cerr <<	"Error:	" << e.msg;
	}
	return	0;
}
