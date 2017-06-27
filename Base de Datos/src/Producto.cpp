#include "Producto.h"

Producto::Producto(){
	this->codigo = " ";
	this->p_venta = " ";
	this->stock = " ";
}

string Producto::getCodigo(){return codigo;}
string Producto::getPventa(){return p_venta;}
string Producto::getStock(){return stock;}


void Producto::setCodigo(string codigo){this->codigo = codigo;}
void Producto::setPventa(string p_venta){this->p_venta = p_venta;}
void Producto::setStock(string stock){this->stock = stock;}

/*

void Producto::guardar(){
    string datos;
    datos = codigo +" "+ p_venta + " " + stock;

    archivo.open ("productos.txt", std::fstream::out | std::fstream::app);
    //archivo.open ("productos.txt", fstream::out | fstream::app);
    archivo<< datos<<endl;
    archivo.close();
}
*/
