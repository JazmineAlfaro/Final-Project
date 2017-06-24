#include <iostream>
#include "Producto.h"
#include "Ask.h"
#include "Menu.h"
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

//vector<string> instrucciones;


int main()
{

    Producto p;
    Producto a;
    p.setCodigo("producto 1");
    p.setPventa("40.00");
    p.setStock("15");
    //p.guardar();

    a.setCodigo("producto 2");
    a.setPventa("19.00");
    a.setStock("11");
    a.guardar();
    a.visualizar();

    system("productos.txt");

}
