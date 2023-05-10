#include <iostream>

int main(void){
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string	&stringREF = str;
	
	stringPTR = &str;

	std::cout<<"La dirección de memoria de la variable de tipo string: "<<&str<<std::endl;
	std::cout<<"La dirección de memoria contenida en stringPTR: "<<&stringPTR<<std::endl;
	std::cout<<"La dirección de memoria contenida en stringREF: "<<&stringREF<<std::endl;

	std::cout<<"El valor de la variable string: "<<str<<std::endl;
	std::cout<<"El valor apuntado por stringPTR: "<<stringPTR<<std::endl;
	std::cout<<"El valor apuntado por stringREF: "<<stringREF<<std::endl;

	return (0);
}
/*
// Ejemplo de una referencia de C++
int jose = 5;
int &pepe = jose;
// Cambiamos el valor de "jose" utilizando su alias
pepe = 10;
// Comprobamos que el valor original ha sido modificado
std::cout << "Valor: " << jose << std::endl;
// Salida
// Valor: 10


DIFERENCIAS ENTRE PUNTERO Y REFERENCIA EN C++
Primera diferencia:

// - Las referencias no pueden almacenar un valor nulo -
int *ptr = NULL;
int &reference = NULL; // ¡ERROR!
Segunda diferencia:

// - Las referencias deben inicializarse al momento en que se crean -
int i = 4;
int &ref_i = i; // "ref_i" es el alias de la variable "i"
int &ref_j; // ¡ERROR! A "ref_j" se le debe asignar alguna variable
// - Los apuntadores pueden ser inicializados posteriormente -
int *ptr_i; // Declaramos al apuntador
ptr_i = &i; // Ahora lo hacemos que apunte a la variable "i"
Tercera diferencia:

// - Las referencias no pueden reasignarse a otra variable -
int x = 1;
int y = 2;
int &ref_n = x; // "ref_n" es un alias de "x"
ref_n = y; // ¡ERROR! "ref_n" está unido de por vida a "x"
// - Los apuntadores pueden cambiar de valor en cualquier momento -
int *ptr_n = &x; // "ptr_n" apunta a la variable "x"
ptr_n = &y; // Ahora "ptr_n" apunta a la variable "y"
*/