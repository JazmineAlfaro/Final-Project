#ifndef LAPTOP_H
#define LAPTOP_H

#include "Producto.h"
#include <iostream>
#include <string>

using namespace std;

class Laptop : public Producto{
private:
    string marca;
    string modelo;
    string procesador;

public:
    Laptop();
    string getMarca();
	string getModelo();
	string getProcesador();
    string setMarca(string marca);
	string setModelo(string modelo);
	string setProcesador(string procesador);
	void print();

};

#endif // LAPTOP_H
