#ifndef DB_H
#define DB_H
#include "Producto.h"
#include "Ask.h"
#include <vector>
#include <string>
#include<fstream>

class DB{
protected:
    vector<Producto *> productitos;
    string texto;
    fstream archivo;

public:
    DB(string nArchivo="productos.txt");

    // Reimplementados
    void Insertar(Producto *P);
    void Recuperar(string nArchivo="productos.txt");
    void Salvar(string nArchivo="productos.txt");
    void Visualizar();
    void Seleccionar();
    void Eliminar();

    void Actualizar();
    void Consultar();

};

#endif // DB_H
