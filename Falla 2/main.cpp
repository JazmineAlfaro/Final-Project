#include <iostream>
#include "Producto.h"
#include "DB.h"
#include "Laptop.h"
#include "Menu.h"
#include "Celular.h"
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

//vector<string> instrucciones;


int main()
{

    Producto p("producto,40.00,15");
    Producto a("producto2,19.00,11");
    Laptop b("Laptop1,48.00,14,i7,Dell");

    DB c;

    c.Salvar();
    c.Insertar(&p);
    c.Insertar(&a);
    c.Insertar(&b);

    c.Visualizar();
    c.Recuperar();
    c.Salvar();

}
