#ifndef LAPTOP_H
#define LAPTOP_H
#include <string>


#include "Producto.h"

class Laptop : public Producto{

private:
	string procesador;
    string disco_duro;

public:
	Laptop();
	Laptop(string datos);

	string getPalabra(string &palabra);
	string getProcesador();
	string getDisco_duro();

	void setProcesador(string procesador);
	void setDisco_duro(string disco_duro);

	void ingresarLaptop();

	void print();
	void subir();

};

#endif // LAPTOP_H
