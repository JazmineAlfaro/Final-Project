#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "Producto.h"
#include "Laptop.h"
#include <iostream>
#include <string>

using namespace std;

class Smartphone:public Producto{
protected:
    double pulgadas;
    double camara;
    string color;
public:
   // Smartphone(double _pulgadas,double _camara,string _color);
    Smartphone();
    double getPulgadas();
	double getCamara();
	string getColor();
    double setPulgadas(double pulgadas);
	double setCamara(double camara);
	string setColor(string color);
	void print();

};

#endif // SMARTPHONE_H
