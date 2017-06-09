#include "Modificar.h"

int Modificar::selecciona(){
    Ask pregunta;
    int a;
    cout << endl;
    cout << "Ingrese el numero segun lo que desee modificar" << endl;
	cout << endl;
	cout << 1 << " Codigo" << endl;
	cout << endl;
	cout << 2 << " Precio de Venta" << endl;
	cout << endl;
	cout << 3 << " Moneda" << endl;
	cout << endl;
	cout << 4 << " Costo" << endl;
	cout << endl;
	cout << 5 << " Stock" << endl;
	cout << endl;
    a = pregunta.askNumber();
    return a;
}

void Modificar::modificarCodigo(Producto P){
    Ask pregunta;
    string newCodigo = pregunta.askCodigo();
    P.setCodigo(newCodigo);
}

void Modificar::modificarP_venta(Producto P){
    Ask pregunta;
    double newPrecio = pregunta.askPventa();
    P.setPventa(newPrecio);
}

void Modificar::modificarMoneda(Producto P){
    Ask pregunta;
    double newMoneda = pregunta.askMoneda();
    P.setMoneda(newMoneda);
}

void Modificar::modificarCosto(Producto P){
    Ask pregunta;
    double newCosto = pregunta.askCosto();
    P.setCosto(newCosto);
}

void Modificar::modificarStock(Producto P){
    Ask pregunta;
    double newStock = pregunta.askStock();
    P.setStock(newStock);
}


void Modificar::elegir(int i, Producto p){
	switch(i){
	case 1:
		modificarCodigo(p);
		break;
	case 2:
		modificarP_venta(p);
		break;
	case 3:
		modificarMoneda(p);
		break;
	case 4:
		modificarCosto(p);
		break;
	case 5:
		modificarStock(p);
		break;
	}
}
