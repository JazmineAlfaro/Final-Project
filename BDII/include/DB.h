#ifndef DB_H
#define DB_H
#include "Producto.h"
#include <vector>
#include <string>


class DB{
private:
    DB();
    vector<*Producto> productitos;
    fstream archivo;
    string ingresar[3] = {"Ingrese el codigo", "Ingrese el precio de venta", "Ingrese el stock"};
    string ingresados[3];
    void cargar();
    void visualizar();
};

#endif // DB_H
