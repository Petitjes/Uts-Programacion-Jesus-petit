#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int opcion;
	double resultado;
	
	cout << "Calculadora de  areas de figuras" << endl;
	cout << "1 C�rculo" << endl;
	cout << "2 Cuadrado" << endl;
	cout << "3 Tri�ngulo" << endl;
	cout << "Ingrese la opci�n deseada: ";
	cin >> opcion;
	
	switch (opcion) {
	case 1:
		double radio;
		cout << "Ingrese el radio del c�rculo: ";
		cin >> radio;
		resultado = 'M_PI' * pow(radio, 2);
		cout << "El �rea del c�rculo es: " << resultado << endl;
		break;
	case 2:
		double lado;
		cout << "Ingrese el lado del cuadrado: ";
		cin >> lado;
		resultado = lado * lado;
		cout << "El �rea del cuadrado es: " << resultado << endl;
		break;
	case 3:
		double base, altura;
		cout << "Ingrese la base del tri�ngulo: ";
		cin >> base;
		cout << "Ingrese la altura del tri�ngulo: ";
		cin >> altura;
		resultado = (base * altura) / 2;
		cout << "El �rea del tri�ngulo es: " << resultado << endl;
		break;
	default:
		cout << "Opci�n inv�lida." << endl;
	}
	
	return 0;
}

