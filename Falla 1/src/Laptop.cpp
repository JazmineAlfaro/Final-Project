#include "Laptop.h"

Laptop::Laptop(){
	this->procesador = " ";
	this->disco_duro = " ";
}
void Laptop::setProcesador(string procesador){this->procesador = procesador;}
void Laptop::setDisco_duro(string disco_duro){this->disco_duro = disco_duro;}


Laptop::Laptop(string datos){
	setCodigo(getPalabra(datos));
	setPventa(getPalabra(datos));
	setStock(getPalabra(datos));
	setProcesador(getPalabra(datos));
	setDisco_duro(getPalabra(datos));
}

string Laptop::getPalabra(string &palabra){
    int pos=palabra.find("-");
    string tpalabra=palabra.substr(0,pos);
    palabra=palabra.substr(pos+1,palabra.length());
    return tpalabra;
}

string Laptop::getProcesador(){return procesador;}
string Laptop::getDisco_duro(){return disco_duro;}


void Laptop::print(){
	cout<<codigo<<" "<<p_venta<< " "<<stock<<" "<<procesador<<" "<<disco_duro<<endl;
}

void Laptop::subir(){
	string datos;
	datos = codigo +" - "+ p_venta + "  - " + stock +" - "+ procesador + " - " + disco_duro;
	archivo.open ("productos.txt", fstream::out | fstream::app);
	archivo<< datos<<endl;
	archivo.close();
}
void Laptop::ingresarLaptop(){
    Laptop l;
    string respuestas[5];
    string preguntas[5] = {" 1. Ingrese codigo", " 2. Ingrese precio de venta", " 3. Ingrese stock", " 4. Ingrese procesador", "5. Ingrese el disco duro"};
	for(int i=0;i<5;i++){
		cout<<preguntas[i]<<endl;
		cin>>respuestas[i];
		cout<<endl;
	}
	l.setCodigo(respuestas[0]);
    l.setPventa(respuestas[1]);
    l.setStock(respuestas[2]);
    l.setProcesador(respuestas[3]);
    l.setDisco_duro(respuestas[4]);
    l.subir();
}
