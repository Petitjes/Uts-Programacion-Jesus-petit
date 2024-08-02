#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
	
	using namespace std;

bool esPrimo(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i * i <= num; ++i) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	const int NUM_ELEMENTOS = 20;
	vector<int> numerosAleatorios(NUM_ELEMENTOS);
	vector<int> numerosPrimos;
	
	// Inicializar semilla para números aleatorios
	srand(time(nullptr));
	
	// Generar números aleatorios
	for (int i = 0; i < NUM_ELEMENTOS; ++i) {
		numerosAleatorios[i] = rand() % 100;
	}
	
	// Encontrar números primos
	for (int num : numerosAleatorios) {
		if (esPrimo(num)) {
			numerosPrimos.push_back(num);
		}
	}
	
	// Mostrar los resultados
	cout << "Números aleatorios: ";
	for (int num : numerosAleatorios) {
		cout << num << " ";
	}
	cout << endl;
	
	cout << "Números primos: ";
	for (int num : numerosPrimos) {
		cout << num << " ";
	}
	cout << endl;
	
	return 0;
}

