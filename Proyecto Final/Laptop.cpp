#include "Laptop.h"

Laptop::Laptop()
{
    this->marca = getMarca();
    this->modelo = getModelo();
    this->procesador = getProcesador();
}

string Laptop::getMarca(){return pregunta.askMarca();}
string Laptop::getModelo(){return pregunta.askModelo();}
string Laptop::getProcesador(){return pregunta.askProcesador();}
string Laptop::setMarca(string mark){this->marca = mark;}
string Laptop::setModelo(string model){this->modelo = model;}
string Laptop::setProcesador(string proces){this->procesador = proces;}

void Laptop::print(){
    Producto::print();
    cout << " 8. Marca: " << marca << endl;
    cout << " 9. Modelo: " << modelo << endl;
    cout << "10. Procesador: " << procesador << endl;
}
