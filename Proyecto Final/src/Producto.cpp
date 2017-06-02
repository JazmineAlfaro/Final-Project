#include "Producto.h"
Producto::Producto(){
	this->codigo = getCodigo();
	this->articulo = getArticulo();
	this->clase = getClase();
	this->unidad_principal = getUnidad();
	this->p_venta = getPventa();
	this->moneda = getMoneda();
	this->costo = getCosto();
	this->stock = getStock();
}

string Producto::getCodigo(){return pregunta.askCodigo();}
string Producto::getArticulo(){return pregunta.askArticulo();}
double Producto::getUnidad(){return pregunta.askUnidad();}
double Producto::getPventa(){return pregunta.askPventa();}
double Producto::getMoneda(){return pregunta.askMoneda();}
double Producto::getCosto(){return pregunta.askCosto();}
double Producto::getStock(){return pregunta.askStock();}


string Producto::setCodigo(string code){this->codigo = code;}
string Producto::setArticulo(string arti){this->articulo = arti;}
double Producto::setUnidad(double uni){this->unidad_principal = uni ;}
double Producto::setPventa(double ventita){this->p_venta = ventita;}
double Producto::setMoneda(double coin){this->moneda = coin;}
double Producto::setCosto(double cost){this->costo = cost;}
double Producto::setStock(double cant){this->stock = cant;}

void Producto::print(){
	cout << " 1. Codigo: " << codigo << endl;
	cout << " 2. Articulo: " << articulo << endl;
	cout << " 3. Unidad principal : " << unidad_principal <<endl;
	cout << " 4. Precio de venta: " << p_venta <<endl;
	cout << " 5. Moneda: " << moneda << endl;
	cout << " 6. Costo: " << costo <<endl;
	cout << " 7. Stock: " << stock << endl;
}

