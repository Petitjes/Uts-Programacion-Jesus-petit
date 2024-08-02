#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct Estudiante {
	string nombre;
	double notas[3]; 
	double notaFinal;
};

int main() {
	vector<Estudiante> estudiantes;
	int numEstudiantes;
	
	cout << "Ingrese el número de estudiantes: ";
	cin >> numEstudiantes;
	
	
	for (int i = 0; i < numEstudiantes; ++i) {
		Estudiante estudiante;
		cout << "Estudiante " << i + 1 << endl;
		cout << "Nombre: ";
		cin >> estudiante.nombre;
		cout << "Nota 1er corte: ";
		cin >> estudiante.notas[0];
		cout << "Nota 2do corte: ";
		cin >> estudiante.notas[1];
		cout << "Nota 3er corte: ";
		cin >> estudiante.notas[2];
		
		
		estudiante.notaFinal = (estudiante.notas[0] + estudiante.notas[1] + estudiante.notas[2]) / 3.0;
		
		estudiantes.push_back(estudiante);
	}
	
	
	cout << "\nResultados:\n";
	cout << "Estudiante\tNota 1\tNota 2\tNota 3\tNota Final\n";
	for (const Estudiante& estudiante : estudiantes) {
		cout << estudiante.nombre << "\t"
			<< fixed << setprecision(2) << estudiante.notas[0] << "\t"
			<< fixed << setprecision(2) << estudiante.notas[1] << "\t"
			<< fixed << setprecision(2) << estudiante.notas[2] << "\t"
			<< fixed << setprecision(2) << estudiante.notaFinal << endl;
	}
	
	return 0;
}

