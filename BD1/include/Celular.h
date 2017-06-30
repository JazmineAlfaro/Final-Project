#ifndef CELULAR_H
#define CELULAR_H
#include"Producto.h"

class Celular:public Producto
{
protected:
    string modelo;
    string camara;
    string pulgadas;
    public:
        Celular();
        Celular(string codigo,string p_venta,string stock,string modelo,string camara,string pulgadas);
        Celular(const Celular &C);
        Celular(string datos);

        string getCodigo();
        string getPventa();
        string getStock();
        string getModelo();
        string getCamara();
        string getPulgadas();

        void setCodigo(string codigo);
        void setPventa(string p_venta);
        void setStock(string stock);
        void setModelo(string modelo);
        void setCamara(string camara);
        void setPulgadas(string pulgadas);

        friend ostream &operator << (ostream &o,Celular c){
        o<<"CODIGO:"<<c.codigo<<endl;
        o<<"P.VENTA:"<<c.p_venta<<endl;
        o<<"STOCK:"<<c.stock<<endl;
        o<<"MODELO:"<<c.modelo<<endl;
        o<<"CAMARA:"<<c.camara<<endl;
        o<<"PULGADAS:"<<c.pulgadas<<endl;
        return o;
        }



    private:
};

#endif // CELULAR_H

