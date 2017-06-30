#include "Celular.h"

Celular::Celular()
{
    this->codigo="";
    this->p_venta="";
    this->stock="";
    this->modelo="";
    this->camara="";
    this->pulgadas="";
}/*
Celular::Celular(const Celular &C){
    this->codigo=C.codigo;
    this->p_venta=C.p_venta;
    this->stock=C.stock;
    this->modelo=C.modelo;
    this->camara=C.pulgadas;
}

Celular::Celular(string codigo,string p_venta,string stock,string modelo,string camara){
    this->codigo = codigo;
    this-> p_venta = p_venta;
    this->stock = stock;
    this->modelo=modelo;
    this->camara = camara;
}*/
Celular::Celular(string datos){
    this->codigo=getPalabra(datos);
    this->p_venta=getPalabra(datos);
    this->stock=getPalabra(datos);
    this->modelo=getPalabra(datos);
    this->camara=getPalabra(datos);
}


string Celular::getModelo(){return modelo;}
string Celular::getCamara(){return camara;}

void Celular::setModelo(string modelo){this->modelo=modelo;}
void Celular::setCamara(string camara){this->camara=camara;}
