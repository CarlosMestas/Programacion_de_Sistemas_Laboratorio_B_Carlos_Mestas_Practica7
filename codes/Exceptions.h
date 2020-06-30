#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <cstring>	
#include <iostream>
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

class ComputerException {
public:
	char mesage[50];
};

class InputException: public ComputerException{
public:
	InputException(const char *msg2) {
		strcpy(this->mesage, msg2);
	}
};

class ProcessorException: public ComputerException{
public:
	ProcessorException(const char *msg2) {
		strcpy(this->mesage, msg2);
	}
};

class OutputException: public ComputerException{
public:
	OutputException(const char *msg2) {
		strcpy(this->mesage, msg2);
	}
};
#endif
