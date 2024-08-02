#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Producto {
public:
	string nombre;
	double precio;
	int cantidad;
	double subtotal() const {
		return precio * cantidad;
	}
};

int main() {
	string nombreCliente;
	map<string, Producto> carrito;
	double totalCompra = 0, totalDescuento = 0;
	
	cout << "Ingrese el nombre del cliente: ";
	getline(cin, nombreCliente);
	
	char seguirComprando = 's';
	while (seguirComprando == 's' || seguirComprando == 'S') {
		Producto producto;
		cout << "Ingrese el nombre del producto: ";
		getline(cin, producto.nombre);
		cout << "Ingrese el precio del producto: ";
		cin >> producto.precio;
		cout << "Ingrese la cantidad: ";
		cin >> producto.cantidad;
		
		carrito[producto.nombre] = producto; 
		
		cout << "¿Desea agregar otro producto? (s/n): ";
		cin >> seguirComprando;
		cin.ignore();
	}
	

	for (const auto& par : carrito) {
		totalCompra += par.second.subtotal();
	}
	

	if (totalCompra > 1000) {
		double descuento = totalCompra * 0.2;
		totalCompra -= descuento;
		totalDescuento = descuento;
	}
	
	
	cout << "\nResumen de la compra de " << nombreCliente << endl;
	cout << "----------------------------------------" << endl;
	cout << "Producto\tPrecio\tCantidad\tSubtotal" << endl;
	for (const auto& par : carrito) {
		cout << par.first << "\t" << par.second.precio << "\t" << par.second.cantidad << "\t" << par.second.subtotal() << endl;
	}
	cout << "----------------------------------------" << endl;
	cout << "Total compra: $" << totalCompra << endl;

	return 0;
}

