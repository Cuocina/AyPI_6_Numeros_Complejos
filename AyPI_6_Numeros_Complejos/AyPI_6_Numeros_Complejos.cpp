#include <iostream>
using namespace std;

// Convenciones de nombramiento
//1) Pascal Camel Case (lowerCase, UpperCase)=> Constantes, Nombre de Estructuras, Funciones y nombres de archivos que tienen modulos utilizamos UpperCase, para nombres de variable lowerCase
//2) Notacion Hungara: Hay underscore (_) -> No la utilizamos

struct Complejo {
	float parteReal;
	float parteImaginaria;
};

struct NumeroComplejo {
	float parteReal;
	float parteImaginaria;
};


NumeroComplejo ObtenerConjugado(NumeroComplejo numero);
void Mostrar(NumeroComplejo numero);

int main() {

	NumeroComplejo unoUno;
	unoUno.parteReal = 1;
	unoUno.parteImaginaria = 1;
	Mostrar(unoUno);
	Mostrar(ObtenerConjugado(unoUno));

	return 0;
}

void Mostrar(NumeroComplejo numero) {
	cout << numero.parteReal;
	if (numero.parteImaginaria != 0) {
		char signo = (numero.parteImaginaria > 0) ? '+' : ' ';
		cout << signo << numero.parteImaginaria << "i";
	}
	cout << endl;
}


NumeroComplejo ObtenerConjugado(NumeroComplejo numero) {
	NumeroComplejo otroNumero;
	otroNumero.parteReal = numero.parteReal;
	otroNumero.parteImaginaria = numero.parteImaginaria * -1;

	return otroNumero;
}
