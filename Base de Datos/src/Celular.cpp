#include "Celular.h"

Celular::Celular(){
    this->marca = " ";
    this->modelo = " ";
}

void Celular::setMarca(string marca){this->marca = marca;};
void Celular::setModelo(string modelo){this->modelo = modelo;};


void Celular::print(){
    cout<<codigo<<" - "<<p_venta<< " - "<<stock<<" - "<<marca<<" - "<<modelo<<endl;

}
