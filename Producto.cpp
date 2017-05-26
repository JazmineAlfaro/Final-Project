#include "Producto.h"

Producto::Producto(){
	this->serie = " ";
	this->codigo = " ";
	this->descripcion = " ";
	this->costo = 0.0;
	this->utilidad = 0.0;
	this->p_venta = 0.0;
	this->moneda = 0.0;
	this->unidad_principal = 0.0;
}


string Producto::getSerie(){return serie;}
string Producto::getCodigo(){return codigo;}
string Producto::getDescripcion(){return descripcion;}
double Producto::getCosto(){return costo;}
double Producto::getUtilidad(){return utilidad;}
double Producto::getPventa(){return p_venta;}
double Producto::getMoneda(){return moneda;}
double Producto::getUnidad(){return unidad_principal;}


string Producto::setSerie(string seri){this->serie = seri;}
string Producto::setCodigo(string code){this->codigo = code;}
string Producto::setDescripcion(string des){this->descripcion = des;}
double Producto::setCosto(double cost){this->costo = cost;}
double Producto::setUtilidad(double uti){this->utilidad = uti;}
double Producto::setPventa(double ventita){this->p_venta = ventita;}
double Producto::setMoneda(double coin){this->moneda = coin;}
double Producto::setUnidad(double uni){this->unidad_principal = uni ;}



void Producto::print(){
	cout << "Serie: " << serie << endl;
	cout << "Codigo: " << codigo << endl;
	cout << "Descripcion: " << descripcion << endl;
	cout << "Costo: " << costo <<endl;
	cout << "Utilidad: " << utilidad <<endl;
	cout << "Precio de venta: " << p_venta <<endl;
	cout << "Moneda: " << moneda << endl;
	cout << "Unidad principal : " << unidad_principal <<endl;
	
}
