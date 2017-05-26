#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include<string>
using namespace std;

class Producto{
protected:
	string serie; //codigo de identificacion de la empresa o de fabrica
	string codigo;
	string descripcion;
	double costo;
	double utilidad ; //ganancia
	double p_venta; //costo y utilidad
	double moneda; //soles o dólares
	double unidad_principal; //unitario, dual, etc.
	
	
public:
	Producto();
	//get
	string getSerie();
	string getCodigo();
	string getDescripcion();
	double getCosto();
	double getUtilidad();
	double getPventa();
	double getMoneda();
	double getUnidad();
	//set
	string setSerie(string seri);
	string setCodigo(string code);
	string setDescripcion(string des);
	double setCosto(double cost);
	double setUtilidad(double uti);
	double setPventa(double ventita);
	double setMoneda(double coin);
	double setUnidad(double uni);
	
	void print();
	
};

#endif // PRODUCTO_H
