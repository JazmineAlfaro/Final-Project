#ifndef DB_H
#define DB_H
#include "Productos.h"


class DB{
private:
    DB();
    vector<*Productos> productitos;
    fstream archivo;
    string ingresar[3] = {"Ingrese el codigo", "Ingrese el precio de venta", "Ingrese el stock"};
    string ingresados[3];
};

#endif // DB_H
