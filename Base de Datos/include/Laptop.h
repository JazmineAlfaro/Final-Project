#ifndef LAPTOP_H
#define LAPTOP_H

#include <Producto.h>

class Laptop : public Producto{

private:
     string procesador;
     string disco_duro;
public:
    Laptop();
    void setProcesador(string procesador);
    void setDisco_duro(string disco_duro);


    void print();
};

#endif // LAPTOP_H
