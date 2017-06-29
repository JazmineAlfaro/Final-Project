#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Producto{
protected:
	string codigo;
	string p_venta; //costo y utilidad
	string stock ; //ganancia
    string getPalabra(string &);
    fstream archivo;

public:

	Producto();
	Producto(const Producto &P);
	Producto(string,string,string);

	Producto(string);

	string getCodigo();
    string getPventa();
	string getStock();

	void setCodigo(string codigo);
    void setPventa(string p_venta);
    void setStock(string stock);

    virtual void print() = 0;
    virtual void subir();
/*
    friend ostream &operator << (ostream &o,Producto p)
    {
        o<<"CODIGO  : "<<p.codigo<<endl;
        o<<"P. VENTA: "<<p.p_venta<<endl;
        o<<"STOCK   : "<<p.stock<<endl;
        return o;
    }*/
};

#endif // PRODUCTO_H
