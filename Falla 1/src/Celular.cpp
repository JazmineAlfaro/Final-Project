#include "Celular.h"

Celular::Celular(){
	this->marca = " ";
	this->modelo = " ";
}

Celular::Celular(string datos){
	setCodigo(getPalabra(datos));
	setPventa(getPalabra(datos));
	setStock(getPalabra(datos));
	setMarca(getPalabra(datos));
	setModelo(getPalabra(datos));
}

string Celular::getPalabra(string &palabra){
    int pos=palabra.find("-");
    string tpalabra=palabra.substr(0,pos);
    palabra=palabra.substr(pos+1,palabra.length());
    return tpalabra;
}

string Celular::getMarca(){return marca;}
string Celular::getModelo(){return modelo;}

void Celular::setMarca(string marca){this->marca = marca;}
void Celular::setModelo(string modelo){this->modelo = modelo;}


void Celular::print(){
	cout<<codigo<<" "<<p_venta<< " "<<stock<<" "<<marca<<" "<<modelo<<endl;
}

void Celular::subir(){
	string datos;
	datos = codigo +" - "+ p_venta + " - " + stock + " - " + marca + " - " + modelo;
	archivo.open ("productos.txt", std::fstream::out | std::fstream::app);
	archivo<< datos<<endl;
	archivo.close();
}

void Celular::ingresarCelular(){
    Celular c;
    string respuestas[5];
    string preguntas[5] = {" 1. Ingrese codigo", " 2. Ingrese precio de venta", " 3. Ingrese stock", " 4. Ingrese marca", "5. Ingrese modelo"};
	for(int i=0;i<5;i++){
		cout<<preguntas[i]<<endl;
		cin>>respuestas[i];
		cout<<endl;
	}
	c.setCodigo(respuestas[0]);
    c.setPventa(respuestas[1]);
    c.setStock(respuestas[2]);
    c.setMarca(respuestas[3]);
    c.setModelo(respuestas[4]);
    c.subir();
}
