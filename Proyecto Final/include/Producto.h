#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include<string>
#include "Ask.h"
using namespace std;

class Producto{
protected:
	string codigo;
	string articulo;
	string marca;
	string modelo;
	double unidad_principal; //unitario, dual, etc.
	double p_venta; //costo y utilidad
	double moneda; //soles o dólares
	double costo;
	double stock ; //ganancia

public:
	Producto();
	Ask pregunta;
	//get
	string getCodigo();
	string getArticulo();
	double getUnidad();
	double getPventa();
	double getMoneda();
	double getCosto();
	double getStock();
	//set
	string setCodigo(string code);
	string setArticulo(string arti);
	double setUnidad(double uni);
	double setPventa(double ventita);
	double setMoneda(double coin);
	double setCosto(double cost);
	double setStock(double cant);

	void print();

};

#endif // PRODUCTO_H
