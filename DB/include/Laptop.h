#ifndef LAPTOP_H
#define LAPTOP_H

#include "Producto.h"
#include <iostream>
#include <string>

using namespace std;

class Laptop : public Producto{
private:
    string codigo;
	string articulo;
	string clase;
	double unidad_principal; //unitario, dual, etc.
	double p_venta; //costo y utilidad
	double moneda; //soles o dólares
	double costo;
	double stock ; //ganancia
    string marca;
    string modelo;
    string procesador;

public:
    Laptop();
    string getCodigo();
	string getArticulo();
	double getUnidad();
	double getPventa();
	double getMoneda();
	double getCosto();
	double getStock();
    string getMarca();
	string getModelo();
	string getProcesador();


	string setCodigo(string codigo);
    string setArticulo(string articulo);
    string setClase(string clase);
    double setUnidad(double unidad);
    double setPventa(double p_venta);
    double setMoneda(double moneda);
    double setCosto(double costo);
    double setStock(double stock);
    string setMarca(string marca);
	string setModelo(string modelo);
	string setProcesador(string procesador);
	void print();

};

#endif // LAPTOP_H
