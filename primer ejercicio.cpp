#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int opcion;
	double resultado;
	
	cout << "Calculadora de  areas de figuras" << endl;
	cout << "1 Círculo" << endl;
	cout << "2 Cuadrado" << endl;
	cout << "3 Triángulo" << endl;
	cout << "Ingrese la opción deseada: ";
	cin >> opcion;
	
	switch (opcion) {
	case 1:
		double radio;
		cout << "Ingrese el radio del círculo: ";
		cin >> radio;
		resultado = 'M_PI' * pow(radio, 2);
		cout << "El área del círculo es: " << resultado << endl;
		break;
	case 2:
		double lado;
		cout << "Ingrese el lado del cuadrado: ";
		cin >> lado;
		resultado = lado * lado;
		cout << "El área del cuadrado es: " << resultado << endl;
		break;
	case 3:
		double base, altura;
		cout << "Ingrese la base del triángulo: ";
		cin >> base;
		cout << "Ingrese la altura del triángulo: ";
		cin >> altura;
		resultado = (base * altura) / 2;
		cout << "El área del triángulo es: " << resultado << endl;
		break;
	default:
		cout << "Opción inválida." << endl;
	}
	
	return 0;
}

