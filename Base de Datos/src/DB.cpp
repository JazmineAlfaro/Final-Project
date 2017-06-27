#include "DB.h"

DB::DB()
{
    ;//ctor
}

//vector DB::productitos;
void DB::guardar(Producto *p){
    productitos.push_back(p);
}

void DB::mostrar(){
    for(int i=0;i<productitos.size();i++){
        Producto *temp = DB::productitos[i];
        temp->print();
    }
}

/*
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



*/
void DB::menu_principal(){
    cout<<" Bienvenido a su base de datos"<<endl;
    cout<< " Desea : "<<endl;
    cout<<endl;
    string opciones[3] = {" 1. Insertar producto", " 2. Eliminar producto", " 3. Visualizar producto"};
     for(int i=0;i<3;i++){
        cout<<opciones[i]<<endl;
        cout<<endl;
     }
}

void DB::menu_insertar(){
    string opciones[3] = {" 1. Insertar laptop", " 2. Insertar celular", " 3. Regresar al menu principal"};
     for(int i=0;i<3;i++){
        cout<<opciones[i]<<endl;
        cout<<endl;
     }
}

void DB::menu_eliminar(){
    string opciones[3] = {" 1. Eliminar laptop", " 2. Eliminar celular", " 3. Regresar al menu principal"};
     for(int i=0;i<3;i++){
        cout<<opciones[i]<<endl;
        cout<<endl;
     }
}

void DB::menu_visualizar(){
   string opciones[4] = {" 1. Visualizar laptop", " 2. Visualizar celular", " 3. Visualizar todos los productos"," 4. Regresar al menu principal"};
     for(int i=0;i<4;i++){
        cout<<opciones[i]<<endl;
        cout<<endl;
     }
}



