#include "Producto.h"

Producto::Producto(){
	this->codigo = " ";
	this->p_venta = " ";
	this->stock = " ";
}
Producto::Producto(const Producto &P)
{
    codigo = P.codigo;
    p_venta = P.p_venta;
    stock = P.stock;
}
Producto::Producto(string codigo,string p_venta,string stock)
{
    codigo = codigo;
    p_venta = p_venta;
    stock = stock;
}

Producto::Producto(string datos){

	this->codigo = getPalabra(datos);
	this->p_venta = getPalabra(datos);
	this->stock = getPalabra(datos);
}

string Producto::getPalabra(string &palabra){

    int pos=palabra.find("-");
    string tpalabra=palabra.substr(0,pos);
    palabra=palabra.substr(pos+1,palabra.length());
    return tpalabra;
}

string Producto::getCodigo(){return codigo;}
string Producto::getPventa(){return p_venta;}
string Producto::getStock(){return stock;}


void Producto::setCodigo(string codigo){this->codigo = codigo;}
void Producto::setPventa(string p_venta){this->p_venta = p_venta;}
void Producto::setStock(string stock){this->stock = stock;}



void Producto::print(){
    cout<< codigo<< " "<< p_venta << " " <<stock<<endl;

}

void Producto::subir(){
	string datos;
	datos = codigo +" - "+ p_venta + " - " + stock;
	archivo.open ("productos.txt", fstream::out | fstream::app);
	archivo<< datos<<endl;
	archivo.close();
}

