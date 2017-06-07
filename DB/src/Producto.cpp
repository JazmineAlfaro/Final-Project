#include "Producto.h"

Producto::Producto(){
	this->codigo = " ";
	this->articulo = " ";
	this->clase = " ";
	this->unidad_principal = 0.0;
	this->p_venta = 0.0;
	this->moneda = 0.0;
	this->costo = 0.0;
	this->stock = 0.0;
}

string Producto::getCodigo(){return codigo;}
string Producto::getArticulo(){return articulo;}
string Producto::getClase(){ return clase;}
double Producto::getUnidad(){return unidad_principal;}
double Producto::getPventa(){return p_venta;}
double Producto::getMoneda(){return moneda;}
double Producto::getCosto(){return costo;}
double Producto::getStock(){return stock;}


string Producto::setCodigo(string codigo){this->codigo = codigo;}
string Producto::setArticulo(string articulo){this->articulo = articulo;}
string Producto::setClase(string clase){this->clase = clase;}
double Producto::setUnidad(double unidad){this->unidad_principal = unidad ;}
double Producto::setPventa(double p_venta){this->p_venta = p_venta;}
double Producto::setMoneda(double moneda){this->moneda = moneda;}
double Producto::setCosto(double costo){this->costo = costo;}
double Producto::setStock(double stock){this->stock = stock;}

void Producto::print(){
	cout << " 1. Codigo: " << codigo << endl;
	cout << " 2. Articulo: " << articulo << endl;
	cout << " 3. Clase: " << articulo << endl;
	cout << " 4. Unidad principal : " << unidad_principal <<endl;
	cout << " 5. Precio de venta: " << p_venta <<endl;
	cout << " 6. Moneda: " << moneda << endl;
	cout << " 7. Costo: " << costo <<endl;
	cout << " 8. Stock: " << stock << endl;
}
