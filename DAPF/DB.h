#ifndef DB_H
#define DB_H
#include "Producto.h"
#include "Laptop.h"
#include "Celular.h"
#include <vector>
#include <string>
#include<fstream>
#include<stdlib.h>

class DB{
protected:
	vector<Producto *> productitos;
	vector<Celular *> celulares;
	vector<Laptop *> laptops;
	string texto;
	fstream archivo;
	
public:
	DB();
	// Reimplementados
	void Insertar(Producto *P);
	void Recuperar(string nArchivo="productos.txt");
	void Salvar(string nArchivo="productos.txt");
	
	void ver_Productos();
	void ver_Laptops();
	void ver_Celulares();
	
	
	void Seleccionar();
	void Eliminar();
	void cargar();
	void subirDB();
	void Actualizar();
	void separar();
	void menu_principal();
	void seleccion1();
	void menu_insertar();
	void menu_eliminar();
	void menu_visualizar();
	
};

#endif // DB_H

