#ifndef CELULAR_H
#define CELULAR_H
#include<string>
#include "Producto.h"

class Celular : public Producto {
private:
	string marca;
	string modelo;
public:

	Celular();
	Celular(string algo);
	string getPalabra(string &palabra);

	string getMarca();
	string getModelo();

	void setMarca(string marca);
	void setModelo(string modelo);
	void ingresarCelular();

	void print();
	void subir();


};

#endif

