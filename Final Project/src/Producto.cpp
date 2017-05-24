#include "Producto.h"

Producto::Producto()
{
    codigo = " ";
    descripcion = " ";
    costo = 0.0;
    utilidad = 0.0;
    p_venta = 0.0;
    moneda = 0.0;
    unidad_principal = 0;
    serie = " ";
}

Producto::Producto(string code , string des,int cost,int uti, int price ,int coin ,int unit ,string ser){
    codigo = code;
    descripcion = des;
    costo = cost;
    utilidad = uti;
    p_venta = price;
    moneda = coin;
    unidad_principal = unit;
    serie = " ";
}

void Producto::print(){
    cout<<"Codigo: " <<codigo<<endl;
    cout<<"Descripcion: "<<descripcion<<endl;
    cout<<"Costo: "<<costo <<endl;
    cout<<"Utilidad: "<<utilidad <<endl;
    cout<<"Precio de venta: "<<p_venta <<endl;
    cout<<"Moneda: "<<moneda <<endl;
    cout<<"Unidad principal : "<<unidad_principal <<endl;
    cout<<"Serie: "<<serie<<endl;
}
