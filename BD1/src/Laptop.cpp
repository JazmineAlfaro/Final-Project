#include "Laptop.h"

Laptop::Laptop()
{
    Producto::Producto();
    this->procesador=" ";
    this->marca =" ";
}
Laptop::Laptop(const Laptop &L){
    codigo = L.codigo;
    p_venta = L.p_venta;
    stock = L.stock;
    procesador = L.procesador;
    marca = L.marca;
}
Laptop::Laptop(string )
Laptop::~Laptop()
{
    //dtor
}
