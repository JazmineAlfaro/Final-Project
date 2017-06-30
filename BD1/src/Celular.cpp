#include "Celular.h"

Celular::Celular()
{
    this->codigo="";
    this->p_venta="";
    this->stock="";
    this->modelo="";
    this->camara="";
    this->pulgadas="";
}
Celular::Celular(const Celular &C){
    codigo=C.codigo;
    p_venta=C.p_venta;
    stock=C.stock;
    modelo=C.modelo;
    camara=C.pulgadas;
}
Celular::Celular(string codigo,string p_venta,string stock,string modelo,string camara)
{
    codigo = codigo;
    p_venta = p_venta;
    stock = stock;
    modelo=modelo;
    camara = camara;
}
Celular::Celular(string datos){
    this->codigo=getPalabra(datos);
    this->p_venta=getPalabra(datos);
    this->stock=getPalabra(datos);
    this->modelo=getPalabra(datos);
    this->camara=getPalabra(datos);
}
string Celular::getCodigo(){return codigo;}
string Celular::getPventa(){return p_venta;}
string Celular::getStock(){return stock;}
string Celular::getModelo(){return modelo;}
string Celular::getCamara(){return camara;}

void Celular::setCodigo(string codigo){this->codigo=codigo;}
void Celular::setPventa(string p_venta){this->p_venta=p_venta;}
void Celular::setStock(string stock){this->stock=stock;}
void Celular::setModelo(string modelo){this->modelo=modelo;}
void Celular::setCamara(string camara){this->camara=camara;}
