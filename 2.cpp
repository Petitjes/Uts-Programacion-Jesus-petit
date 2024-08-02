#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	const int FILAS = 4;
	const int COLUMNAS = 5;
	
	srand(time(NULL));
	
	vector<vector<int>> matriz(FILAS, vector<int>(COLUMNAS));
	
	for (int i = 0; i < FILAS; ++i) {
		for (int j = 0; j < COLUMNAS; ++j) {
			matriz[i][j] = rand() % 10;
		}
	}
	
	for (int i = 0; i < FILAS; ++i) {
		int sumaFila = 0;
		for (int j = 0; j < COLUMNAS; ++j) {
			sumaFila += matriz[i][j];
			cout << matriz[i][j] << " ";
		}
		cout << "  Suma: " << sumaFila << endl;
	}
	
	cout << "Suma de columnas: ";
	for (int j = 0; j < COLUMNAS; ++j) {
		int sumaColumna = 0;
		for (int i = 0; i < FILAS; ++i) {
			sumaColumna += matriz[i][j];
		}
		cout << sumaColumna << " ";
	}
	
	int sumaTotal = 0;
	for (const auto& fila : matriz) {
		for (int num : fila) {
			sumaTotal += num;
		}
	}
	cout << "\nSuma total: " << sumaTotal << endl;
	
	return 0;
}

