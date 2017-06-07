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
string Laptop::setMarca(string marca){this->marca = marca;}
string Laptop::setModelo(string modelo){this->modelo = modelo;}
string Laptop::setProcesador(string procesador){this->procesador = procesador;}

void Laptop::print(){
    Producto::print();
    cout << " 9. Marca: " << marca << endl;
    cout << "10. Modelo: " << modelo << endl;
    cout << "11. Procesador: " << procesador << endl;
}
