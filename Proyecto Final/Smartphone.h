#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include<Producto.h>
#include"Ask.h"
#include<iostream>
#include<string>


class Smartphone:public Producto
{
    protected:
    double pulgadas;
    double camara;
    string color;
    public:
    Smartphone(double _pulgadas,double _camara,string _color);
    Smartphone();
    double gePulgada();
	double getCamara();
	string getColor();
    double setPulgada(string pulga);
	double setCamara(string model);
	string setColor(string proces);
	void print();

};

#endif // SMARTPHONE_H
