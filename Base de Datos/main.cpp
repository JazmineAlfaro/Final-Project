#include <iostream>
#include "Producto.h"
#include "Laptop.h"
#include "Celular.h"
#include "DB.h"
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

//vector<string> instrucciones;


int main()
{
    DB a;
    //Celular c;
   // c.setMarca("Algo");
   // a.guardar(&c);

   Laptop l;
   a.guardar(&l);
   // a.mostrar();
}
