#include<iostream>
#include<fstream> // manejo de archivos
#include<stdlib.h>
#include<string>

using namespace std;

void escribir();
void lectura();
void aniadir();

int main(){
	escribir();
	lectura();
	aniadir();
	
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo;
	string nArchivo,contenido;
	char rpt;
	
	cout<<"Cual sera el nombre de su archivo:";
	getline(cin,nArchivo);
	
	archivo.open(nArchivo.c_str(),ios::out); // abriendo y creando archivo
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo txt";
		exit(1);
	}
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin,contenido);
		archivo<<contenido<<endl;
		
		cout<<"\nDesea agregar otra frase(S/N): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	
	archivo.close();
}
void lectura(){
	ifstream archivo;
	string nombreArchivo,texto;
	
	cout<<"Digite el nombre o la ubicacion del archivo o fichero: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}
void aniadir(){
	ofstream archivo;
	string nombreArchivo,texto;
	char rpt;
	
	cout<<"Digite el nombre o ubicacion del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::app); //Abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin,texto);
		archivo<<texto<<endl;
		
		cout<<"Desea agregar otra frase? (s/n): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close();
}
