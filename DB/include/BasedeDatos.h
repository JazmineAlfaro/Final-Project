#ifndef BASEDEDATOS_H
#define BASEDEDATOS_H
#include <iostream>
#include <vector>
#include "Producto.h"
#include "Ask.h"
#include "Laptop.h"
#include "Smartphone.h"

using namespace std;
class BasedeDatos{
private:
    static vector<Producto> productos;
    static vector<Laptop> laptops;
    static vector<Smartphone> celulares;
    Ask BD;
public:
    BasedeDatos();
    void ingresaProducto();
    void ingresaLaptop();
    void ingresaSmartphone();
};

#endif // BASEDEDATOS_H
