#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Producto{
protected:
	string codigo;
	string p_venta; //costo y utilidad
	string stock ; //ganancia
	fstream archivo;

public:
	Producto();
	Producto(string algo);
	//get
	string getCodigo();
    string getPventa();
	string getStock();
	//set
	void setCodigo(string codigo);
    void setPventa(string p_venta);
    void setStock(string stock);

    void guardar();
    //void visualizar();
/*  bool insertar();
    bool eliminar();


	//virtual void print();
*/

};

#endif // PRODUCTO_H
