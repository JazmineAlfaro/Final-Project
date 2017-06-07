#include "Smartphone.h"

Smartphone::Smartphone()
{
    this->pulgadas = 0.0;
    this->camara = 0.0;
    this->color = " ";
}

double Smartphone::getPulgadas(){return pulgadas;}
double Smartphone::getCamara(){return camara;}
string Smartphone::getColor(){return color;}
double Smartphone::setPulgadas(double pulgadas){this->pulgadas = pulgadas;}
double Smartphone::setCamara(double camara){this->camara = camara;}
string Smartphone::setColor(string color){this->color = color;}

void Smartphone::print(){
    Producto::print();
    cout << " 9. Pulgadas: " << pulgadas << endl;
    cout << "10. Camara: " << camara << endl;
    cout << "11. Color: " << color << endl;
}
