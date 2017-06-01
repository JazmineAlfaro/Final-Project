#include "Laptop.h"

Laptop::Laptop()
{
    this->marca = " ";
    this->modelo = " ";
    this->procesador = " ";
}

string Laptop::getMarca(){return marca;}
string Laptop::getModelo(){return modelo;}
string Laptop::getProcesador(){return procesador;}
string Laptop::setMarca(string mark){this->marca = mark;}
string Laptop::setModelo(string model){this->modelo = model;}
string Laptop::setProcesador(string proces){this->procesador = proces;}

void Laptop::print(){
    Producto::print();
    cout << " 9. Marca: " << marca << endl;
    cout << " 10. Modelo: " << modelo << endl;
    cout << " 11. Procesador: " << procesador << endl;
}
