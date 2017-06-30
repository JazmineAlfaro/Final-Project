#include "DB.h"

DB::DB()
{
	cargar();
}

void DB::cargar(){
	Producto *temp;
	Laptop *l;
	Celular *c;
	string STRING;
	archivo.open("productos.txt");
	while(!archivo.eof()){
		getline(archivo,STRING);
		if(STRING[0]=='L'){
			temp= new Laptop(STRING);
			l = new Laptop(STRING);
			laptops.push_back(l);
			productitos.push_back(temp);
		}
		else{
			temp = new Celular(STRING);
			c = new Celular(STRING);
			celulares.push_back(c);
			productitos.push_back(temp);
		}
	}
}
/*
void DB::Salvar(string nArchivo)
{
	// por defecto recupera los datos que estan almacenados en el archivo
	archivo.open(nArchivo.c_str(),ios::out);
	int cont=0;
	for(int i=0;i<productitos.size();i++, cont++)
	{
		archivo<<productitos[i]->codigo<<",";
		archivo<<productitos[i]->p_venta<<",";
		archivo<<productitos[i]->stock<<"\n";
	}
	
	cout<<cont<<" Registros guardados"<<endl;
	archivo.close();
}
*/

void DB::Insertar(Producto *p)
{
	productitos.push_back(p);
}

void DB::ver_Productos(){
	int t=productitos.size();
	if(t==0)
		cout<<" Lista de productos vacia"<<endl;
	else{
		cout<<endl;
		int j =1;
		for(int i=0;i<t;i++){
			Producto* temp = productitos[i];
			cout<<j++<<" ";
			temp->print();}
	}
}

void DB::ver_Laptops(){
	int l=laptops.size();
	if(l==0)
		cout<<"Lista de laptops vacia"<<endl;
	else{
		cout<<endl;
		int j =1;
		for(int i=0;i<l;i++){
			Laptop* temp = laptops[i];
			cout<<j++<<" ";
			temp->print();}
	}
}


void DB::ver_Celulares(){
	int c=celulares.size();
	if(c==0)
		cout<<"Lista de celulares vacia"<<endl;
	else{
		cout<<endl;
		int j =1;
		for(int i=0;i<c;i++){
			Celular* temp = celulares[i];
			cout<<j++<<" ";
			temp->print();}
	}
}


/*
void DB::Seleccionar(){
	void Visualizar();
	bool ver=true;
	do{
	int a ;
	cout<<"Que producto desea seleccionar?";cin>>a;
	for(int j=0;j<productitos.size();j++){
	if(a==j){
	cout<<*productitos[j];
	}
	}
	string result;
	cout<<"Desea seguir seleccionando? s/n";cin>>result;
	if(result=="si"){
	ver==true;
	}
	else if(result=="no"){
	ver=false;}
	}while(ver==true);
	}
*/


void DB::subirDB(){
	int t=productitos.size()-1;
	for(int i=0;i<t;i++){
		Producto* temp = productitos[i];
		temp->subir();
	}
}

void DB::Eliminar(){
	ver_Productos();
	bool encontrar=true;
	while(encontrar == true){
	int b;
	cout<<"Que producto desea eliminar?";cin>>b;
	for(int i=0;i<productitos.size()-1;i++){
		if(b-1==i)
		productitos.erase(productitos.begin()+b-1);
		encontrar = false;
	}
	}
	ofstream ficheroSalida;
	ficheroSalida.open ("productos.txt");
	subirDB();
	ficheroSalida.close();
	
	
	
	
}

void DB::menu_principal(){
	cout<<" Bienvenido a su base de datos"<<endl;
	cout<< " Desea : "<<endl;
	cout<<endl;
	string opciones[4] = {" 1. Insertar producto", " 2. Eliminar producto", " 3. Visualizar producto", " 4. Salir de la base de datos"};
	for(int i=0;i<4;i++){
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

void DB::seleccion1(){
	int x;
	cout<< "Ingrese un numero: "; cin>> x;
	cout<<endl;
	switch(x){
	case 1:
		menu_insertar();
		break;
	case 2:
		menu_eliminar();
		break;
	case 3:
		menu_visualizar();
		break;
	case 4:
		exit(1);
		break;
	default:
		cout<<"El numero que ingreso es invalido intente de nuevo"<<endl;
	}
}
