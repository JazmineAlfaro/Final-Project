#include "DB.h"

DB::DB(string nArchivo)
{
    Recuperar(nArchivo);
}

void DB::Recuperar(string nArchivo)
{
    // por defecto recupera los datos que estan almacenados en el archivo
    archivo.open(nArchivo.c_str(),ios::in);
    string _producto;
    Producto *p;
    int cont=0;
    do{
        getline(archivo,_producto);
        if(_producto!=""){
            p=new Producto(_producto);
            Insertar(p);
            cont++;
        }
    }while(!archivo.eof());

    cout<<cont<<" Registros leidos"<<endl;
    archivo.close();
}

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


void DB::Insertar(Producto *p)
{
   productitos.push_back(p);
}

void DB::Visualizar()
{
    int t=productitos.size();
    if(t==0)
        cout<<" Base de datos vacia"<<endl;
    else
    {
        cout<<endl;
        int j =1;
        for(int i=0;i<t;i++)
            cout<<j++<<"."<<*productitos[i]<<endl;
    }
}

void DB::Seleccionar()
{
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
        ver=false;
    }
    }while(ver==true);
}

void DB::Eliminar()
{
    void Visualizar();
    bool encontrar=true;
    do{
        int b;
        cout<<"Que producto desea eliminar?";cin>>b;
        for(int i=0;i<productitos.size();i++){
            if(b==i){
                Producto p;
                *productitos[i]= p;
                *productitos[i]= *productitos[i+1];
                *productitos[i+1]=p;
            }
        productitos.pop_back();
        }
        string res;
        cout<<"Desea eliminar mas productos? s/n";cin>>res;
        if(res=="si"){
            encontrar=true;}
        else{
            encontrar=false;
        }
        }while(encontrar==true);
}
void DB::Consultar(){














}
