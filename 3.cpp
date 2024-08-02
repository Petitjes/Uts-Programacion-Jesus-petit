#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numeros;
	int numero;
	
	
	cout << "Ingrese números enteros (0 para terminar):" << endl;
	while (cin >> numero && numero != 0) {
		numeros.push_back(numero);
	}
	
	
	int suma_positivos = 0, suma_negativos = 0;
	int contador_positivos = 0, contador_negativos = 0;
	
	
	for (int num : numeros) {
		if (num > 0) {
			suma_positivos += num;
			contador_positivos++;
		} else if (num < 0) {
			suma_negativos += num;
			contador_negativos++;
		}
	}
	
	
	double promedio_positivos = (contador_positivos > 0) ? (double)suma_positivos / contador_positivos : 0.0;
	double promedio_negativos = (contador_negativos > 0) ? (double)suma_negativos / contador_negativos : 0.0;
	
	
	cout << "Promedio de los números positivos: " << promedio_positivos << endl;
	cout << "Promedio de los números negativos: " << promedio_negativos << endl;
	
	return 0;
}
