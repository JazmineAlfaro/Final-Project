#include "DB.h"

DB::DB()
{
    ;//ctor
}

void DB::cargar(){
    Producto *temp;
    string STRING;
    archivo.open("productos.txt");
     while(!archivo.eof()){
	        getline(archivo,STRING);
	        switch (STRING[0]){
	            case 'P':
	                temp= new Producto(STRING);
                    break;
                case 'L':
                    temp= new Laptop(STRING);
                    break;
                case 'C':
                    temp = new Computer(STRING);
            }
	        productitos.push_back(temp);
    }
}
void DB::visualizar(){
    string STRING;
    archivo.open("productos.txt");
        while(!archivo.eof()){
	        getline(archivo,STRING);
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
