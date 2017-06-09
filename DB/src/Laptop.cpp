#include "Laptop.h"

Laptop::Laptop()
{	this->codigo = " ";
	this->articulo = " ";
	this->unidad_principal = 0.0;
	this->p_venta = 0.0;
	this->moneda = 0.0;
	this->costo = 0.0;
	this->stock = 0.0;
    this->marca = " ";
    this->modelo = " ";
    this->procesador = " ";
}

string Laptop::getCodigo(){return codigo;}
string Laptop::getArticulo(){return articulo;}
double Laptop::getUnidad(){return unidad_principal;}
double Laptop::getPventa(){return p_venta;}
double Laptop::getMoneda(){return moneda;}
double Laptop::getCosto(){return costo;}
double Laptop::getStock(){return stock;}
string Laptop::getMarca(){return marca;}
string Laptop::getModelo(){return modelo;}
string Laptop::getProcesador(){return procesador;}

string Laptop::setCodigo(string codigo){this->codigo = codigo;}
string Laptop::setArticulo(string articulo){this->articulo = articulo;}
double Laptop::setUnidad(double unidad){this->unidad_principal = unidad ;}
double Laptop::setPventa(double p_venta){this->p_venta = p_venta;}
double Laptop::setMoneda(double moneda){this->moneda = moneda;}
double Laptop::setCosto(double costo){this->costo = costo;}
double Laptop::setStock(double stock){this->stock = stock;}
string Laptop::setMarca(string marca){this->marca = marca;}
string Laptop::setModelo(string modelo){this->modelo = modelo;}
string Laptop::setProcesador(string procesador){this->procesador = procesador;}


void Laptop::print(){
    Producto::print();
    cout << " 9. Marca: " << marca << endl;
    cout << "10. Modelo: " << modelo << endl;
    cout << "11. Procesador: " << procesador << endl;
}
