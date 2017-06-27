#include "Laptop.h"

Laptop::Laptop(){
    this->procesador = " ";
    this->disco_duro = " ";
}

void Laptop::setProcesador(string procesador){this->procesador = procesador;}
void Laptop::setDisco_duro(string disco_duro){this->disco_duro = disco_duro;}


void Laptop::print(){
    cout<<codigo<<" - "<<p_venta<< " - "<<stock<<" - "<<procesador<<" - "<<disco_duro<<endl;
}
