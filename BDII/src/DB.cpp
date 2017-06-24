#include "DB.h"

DB::DB()
{
    //ctor
}

DB::~DB()
{
    //dtor
}

void DB::cargar(){


}
void DB::visualizar(){

    Producto *temp;

    string STRING;
    archivo.open("productos.txt");
        while(!archivo.eof()){
	        getline(archivo,STRING);

	        switch (STRING.()[0]){

            case 'L':
                temp= new Laptop(STRING);
	        }

	        productitos.
	        cout<<STRING<<endl;
        }
	archivo.close();
}


 /*   string ingresados[3];
    string ingresar[3] = {"Ingrese el codigo", "Ingrese el precio de venta", "Ingrese el stock"};
        for(int i=0;i<3;i++){
        cout<<ingresar[i]<<endl;
        cin>>ingresados[i];
}
    cout<<" "<<endl;
    for(int a=0;a<3;a++){
        cout<<ingresados[a]<<endl;
    }
    */
