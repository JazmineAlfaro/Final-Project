#include <iostream>
#include "Producto.h"
#include "DB.h"
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

//vector<string> instrucciones;


int main()
{

    Producto p("producto1,40.00,15");
    Producto a("producto2,19.00,11");

    DB c;

    c.Visualizar();

    c.Insertar(&p);
    c.Insertar(&a);

    c.Visualizar();
    c.Eliminar();
    c.Visualizar();
    c.Salvar();

}
