#ifndef LAPTOP_H
#define LAPTOP_H
#include"Producto.h"


class Laptop:public Producto
{
public:
    string procesador;
    string marca;
    public:
        Laptop();
        Laptop(string,string,string,string,string);
        Laptop(string);
        Laptop(const Laptop &L);
        string getCodigo();
        string getPventa();
        string getStock();
        string getProcs();
        string getMarca();

        void setCodigo(string codigo);
        void setPventa(string p_venta);
        void setStock(string stock);
        void setProcs(string procesador);
        void setMarca(string marca);
        friend ostream &operator<< (ostream &o,Laptop l){
        o<<"CODIGO:"<<l.codigo<<endl;
        o<<"P.VENTA:"<<l.p_venta<<endl;
        o<<"STOCK:"<<l.stock<<endl;
        o<<"PROCESADOR:"<<l.procesador<<endl;
        o<<"MARCA:"<<l.marca;
        return o;
        }
};

#endif // LAPTOP_H
