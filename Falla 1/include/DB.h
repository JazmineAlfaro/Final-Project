#ifndef DB_H
#define DB_H
#include "Producto.h"
#include "Laptop.h"
#include "Celular.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

class DB{
public:
    vector<Producto*> productitos;
	DB();
    fstream archivo;
    void cargar();
    void mostrar();
    void visualizar();

	void menu_principal();
	void menu_insertar();
	void menu_eliminar();
	void menu_visualizar();
	void seleccion1();

	void guardar(Producto* p);



};

#endif // DB_H
