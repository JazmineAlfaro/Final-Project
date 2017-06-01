#include "Ask.h"

string Ask::askCodigo(){
    string code;
    cout<<"Ingresa el codigo: "<<endl;
    cin >> code;
    return code;
}
string Ask::askArticulo(){
    string articulo;
    cout<<"Ingresa el articulo: "<<endl;
    cin >> articulo;
    return articulo;
}

string Ask::askClase(){
    string clase;
    cout<<"Ingresa la clase: "<<endl;
    cin >> clase;
    return clase;
}
string Ask::askUnidad(){
    string unidad;
    cout<<"Ingresa la unidad: "<<endl;
    cin >> unidad;
    return unidad;
}
string Ask::askPventa(){
    string pventa;
    cout<<"Ingresa el precio de venta: "<<endl;
    cin >> pventa;
    return pventa;
}
string Ask::askMoneda(){
    string moneda;
    cout<<"Ingresa la moneda: "<<endl;
    cin >> moneda;
    return moneda;
}
double Ask::askCosto(){
    double costo;
    cout<<"Ingresa el costo: "<<endl;
    cin >> costo;
    return costo;
}
double Ask::askStock(){
    double stock;
    cout<<"Ingresa el stock: "<<endl;
    cin >> stock;
    return stock;
}

string Ask::askMarca(){
    string mark;
    cout<<"Ingresa el marca: "<<endl;
    cin >> mark;
    return mark;
}
string Ask::askModelo(){
    string model;
    cout<<"Ingresa el modelo: "<<endl;
    cin >> model;
    return model;
}
string Ask::askProcesador(){
    string procesador;
    cout<<"Ingresa el procesador: "<<endl;
    cin >> procesador;
    return procesador;
}
