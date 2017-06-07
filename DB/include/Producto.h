#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>
using namespace std;

class Producto{
protected:
	string codigo;
	string articulo;
	string clase;
	double unidad_principal; //unitario, dual, etc.
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
	double getUnidad();
	double getPventa();
	double getMoneda();
	double getCosto();
	double getStock();
	//set
	string setCodigo(string codigo);
    string setArticulo(string articulo);
    string setClase(string clase);
    double setUnidad(double unidad);
    double setPventa(double p_venta);
    double setMoneda(double moneda);
    double setCosto(double costo);
    double setStock(double stock);

	virtual void print();

};

#endif // PRODUCTO_H
