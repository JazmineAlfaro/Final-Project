#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
using namespace std;

class Producto{
protected:
	string codigo;
	string p_venta;
	string stock ;

public:
	Producto();

	string getCodigo();
    string getPventa();
	string getStock();

	void setCodigo(string codigo);
    void setPventa(string p_venta);
    void setStock(string stock);
    virtual void print() = 0;


};

#endif // PRODUCTO_H
