#ifndef DB_H
#define DB_H
#include "Producto.h"
#include "Laptop.h"
#include "Celular.h"
#include <vector>
#include <string>


class DB{
public:
    DB();
    vector<Producto*> productitos;
    void menu_principal();
    void menu_insertar();
    void menu_eliminar();
    void menu_visualizar();
    void guardar(Producto* p);
    void mostrar();


    void visualizar();
    void cargar();

};

#endif // DB_H
