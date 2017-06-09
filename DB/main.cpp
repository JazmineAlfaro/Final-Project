#include <iostream>
#include <cstdlib>
#include "Producto.h"
#include "Laptop.h"
#include "Smartphone.h"
#include "BasedeDatos.h"
#include "Ask.h"
using namespace std;

void menu1(){
    cout<<endl;
    cout<< " Menu Principal: "<<endl;
    cout<<endl;
    cout << " " << 1 << " Ingresar producto" << endl;
    cout<<endl;
	cout << " " << 2 << " Visualizar productos" << endl;
	cout<<endl;
	cout << " " << 3 << " Modificar producto" << endl;
	cout<<endl;
	cout << " " << 4 << " Eliminar producto" << endl;
	cout<<endl;
	cout << " " << 5 << " Buscar producto" << endl;
    cout<<endl;
    cout << " " << 6 << " Salir" << endl;
    cout<<endl;
    }

int opcion(){
   int opc;
   	cout << "Ingrese el numero: " << endl;
	cin >> opc;
	return opc;
}
void ingresar(){
    int x;
    cout<<endl;
    cout << " " << 1 << " Ingresar laptop" << endl;
    cout<<endl;
	cout << " " << 2 << " Ingresar smartphone" << endl;
	cout<<endl;
    cout << " " << 3 << " Regresar" << endl;
    cout<<endl;
	cout << " " << 4 << " Salir " << endl;
	cout<<endl;
    cin>>x;
    switch(x){
    case 1:
        //ojala();
         void ingresaLaptop();
    case 2:
        cout<<"";
    case 3:
        menu1();
    case 4:
        exit(4);
	}
}

void ojala(){
    void ingresaProducto();
}

void ingresa1(){
    ojala();
    /*
    switch(opcion()){
    case 1:
        //ojala();
         void ingresaLaptop();
    case 2:
        cout<<"arreglar";
    case 3:
        menu1();
    case 4:
        exit(4);
	}*/
}

void visualizar(){
    cout<<endl;
    cout << " " << 1 << " Visualizar laptop" << endl;
    cout<<endl;
	cout << " " << 2 << " Visualizar smartphone" << endl;
	cout<<endl;
    cout << " " << 3 << " Visualizar todo" << endl;
    cout<<endl;
	cout << " " << 4 << " Regresar " << endl;
	cout<<endl;
	cout << " " << 5 << " Salir " << endl;
	cout<<endl;
}

void visualizar1(){
    switch(opcion()){
    case 1:
        cout<<"arreglar";
    case 2:
        cout<<"arreglar";
    case 3:
        cout<<"arreglar";
    case 4:
        menu1();
    case 5:
        exit(4);
	}
}
void modificar(){
    cout<<endl;
    cout << " " << 1 << " Modificar laptop" << endl;
    cout<<endl;
	cout << " " << 2 << " Modificar smartphone" << endl;
	cout<<endl;
    cout << " " << 3 << " Regresar" << endl;
    cout<<endl;
	cout << " " << 4 << " Salir " << endl;
	cout<<endl;
}

void modificar1(){
    switch(opcion()){
    case 1:
        cout<<"arreglar";
    case 2:
        cout<<"arreglar";
    case 3:
        menu1();
    case 4:
        exit(4);
	}
}

void eliminar(){
    cout<<endl;
    cout << " " << 1 << " Eliminar laptop" << endl;
    cout<<endl;
	cout << " " << 2 << " Eliminar smartphone" << endl;
	cout<<endl;
    cout << " " << 3 << " Regresar" << endl;
    cout<<endl;
	cout << " " << 4 << " Salir " << endl;
	cout<<endl;
}

void eliminar1(){
    switch(opcion()){
    case 1:
        cout<<"arreglar";
    case 2:
        cout<<"arreglar";
    case 3:
        menu1();
    case 4:
        exit(4);
	}
}

void buscar(){
    cout<<endl;
    cout << " " << 1 << " Buscar laptop" << endl;
    cout<<endl;
	cout << " " << 2 << " Buscar smartphone" << endl;
	cout<<endl;
    cout << " " << 3 << " Regresar" << endl;
    cout<<endl;
	cout << " " << 4 << " Salir " << endl;
	cout<<endl;
}

void buscar1(){
    switch(opcion()){
    case 1:
        cout<<"arreglar";
    case 2:
        cout<<"arreglar";
    case 3:
        menu1();
    case 4:
        exit(4);
	}
}

void seleccionar(int opc){
	switch(opc){
	case 1:
		ingresar();
		ingresa1();

		break;
	case 2:
		visualizar();
		visualizar1();
		//break;
	case 3: //modificar
		modificar();
		modificar1();
		//break;
	case 4: //eliminar
		eliminar();
		eliminar1();
		//break;
	case 5: //salir
		buscar();
		buscar1();
		//break;
    case 6:
        exit(45);
	}
}

int main()
{
    BasedeDatos b;

    //menu1();
    //seleccionar(opcion());
    b.ingresaProducto();


    //buscar();
    //Smartphone p;
	//p.print();


	return 0;
}
