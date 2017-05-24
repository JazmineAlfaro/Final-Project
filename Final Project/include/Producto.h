#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include<string>
using namespace std;

class Producto{
protected:
    string codigo;
    string descripcion;
    float costo;
    float utilidad ; //ganancia
    float p_venta; //costo y utilidad
    float moneda; //soles o dólares
    int unidad_principal; //unitario, dual, etc.
    string serie; //codigo de identificacion de la empresa o de fabrica

public:
    Producto();
    Producto(string code , string des,int cost,int uti, int price ,int coin ,int unit ,string ser);
    void print();

};

#endif // PRODUCTO_H
