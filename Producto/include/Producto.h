#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include<string>
#include <Ask.h>
using namespace std;

class Producto{
protected:
	string codigo;
	string articulo;
	string clase;
	string marca;
	string modelo;
	string unidad_principal; //unitario, dual, etc.
	double p_venta; //costo y utilidad
	double moneda; //soles o dólares
	double costo;
	double stock ; //ganancia

public:
	Producto();
	//get
	string getCodigo();
	string getArticulo();
	string getClase();
	string getUnidad();
	double getPventa();
	double getMoneda();
	double getCosto();
	double getStock();
	//set
	string setCodigo(string code);
	string setArticulo(string arti);
	string setClase(string clas);
	string setUnidad(string uni);
	double setPventa(double ventita);
	double setMoneda(double coin);
	double setCosto(double cost);
	double setStock(double cant);


	void print();

};

#endif // PRODUCTO_H
