#ifndef CELULAR_H
#define CELULAR_H

#include <Producto.h>
#include <string>


class Celular : public Producto{
private:
    string marca;
    string modelo;
public:
    Celular();

    void setMarca(string marca);
    void setModelo(string modelo);
    void print();

};

#endif // CELULAR_H
