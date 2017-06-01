#include "Producto.h"

Producto::Producto(){
	this->codigo = " ";
	this->articulo = " ";
	this->clase = " ";
	this->marca = " ";
	this->modelo = " ";
	this->unidad_principal = 0.0;
	this->p_venta = 0.0;
	this->moneda = 0.0;
	this->costo = 0.0;
	this->stock = 0.0;
}

/*
Producto::Producto(){
	this->codigo = Ask::askCodigo();
	this->articulo = " ";
	this->clase = " ";
	this->marca = " ";
	this->modelo = " ";
	this->unidad_principal = 0.0;
	this->p_venta = 0.0;
	this->moneda = 0.0;
	this->costo = 0.0;
	this->stock = 0.0;
}*/
string Producto::getCodigo(){return codigo;}
string Producto::getArticulo(){return articulo;}
string Producto::getClase(){return clase;}
string Producto::getUnidad(){return unidad_principal;}
double Producto::getPventa(){return p_venta;}
double Producto::getMoneda(){return moneda;}
double Producto::getCosto(){return costo;}
double Producto::getStock(){return stock;}

string Producto::setCodigo(string code){this->codigo = code;}
string Producto::setArticulo(string arti){this->articulo = arti;}
string Producto::setClase(string clas){this->clase = clas;}
string Producto::setUnidad(string uni){this->unidad_principal = uni ;}
double Producto::setPventa(double ventita){this->p_venta = ventita;}
double Producto::setMoneda(double coin){this->moneda = coin;}
double Producto::setCosto(double cost){this->costo = cost;}
double Producto::setStock(double cant){this->stock = cant;}

void Producto::print(){
	cout << " 1. Codigo: " << codigo << endl;
	cout << " 2. Articulo: " << articulo << endl;
	cout << " 3. Clase: " << clase << endl;
	cout << " 4. Unidad principal : " << unidad_principal <<endl;
	cout << " 5. Precio de venta: " << p_venta <<endl;
	cout << " 6. Moneda: " << moneda << endl;
	cout << " 7. Costo: " << costo <<endl;
	cout << " 8. Stock: " << stock << endl;
}
