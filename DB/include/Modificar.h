#ifndef MODIFICAR_H
#define MODIFICAR_H

#include<iostream>
#include <string>
#include "Producto.h"
#include "Laptop.h"
#include "Smartphone.h"
#include "Ask.h"

class Modificar{
public:
    int selecciona();
    void elegir(int i, Producto p);
    void modificarCodigo(Producto);
	void modificarP_venta(Producto);
	void modificarMoneda(Producto);
	void modificarCosto(Producto);
	void modificarStock(Producto);
};

#endif // MODIFICAR_H
