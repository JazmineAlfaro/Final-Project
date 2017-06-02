#include "Smartphone.h"

Smartphone::Smartphone(double _pulgadas,double _camara,string _color):pulgadas(_pulgadas),camara(_ camara),color(_color){}
Smartphone::Smartphone()
{
    this->pulgadas = getPulga();
    this->camara = getCamara();
    this->color = getColor();
}
Smartphone::~Smartphone()
{
}
double Smartphone::getPulga(){return pregunta.askPulgadas();}
double Smartphone::getCamara(){return pregunta.askCamara();}
string Smartphone::getColor(){return pregunta.askColor();}
double Smartphone::setPulga(double pulga){this->pulgadas = pulga;}
double Smartphone::setCamara(double cama){this->camara = cama;}
string Smartphone::setColor(string colo ){this->color = colo;}

void Smartphone::print(){
    Producto::print();
    Laptop::print();
    cout << " 11. Pulgadas: " << marca << endl;
    cout << " 12. Camara: " << modelo << endl;
    cout << "13. Color: " << procesador << endl;
}
