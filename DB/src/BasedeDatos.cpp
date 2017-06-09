#include "BasedeDatos.h"

BasedeDatos::BasedeDatos(){
    Ask sth;
    this->BD = sth;
}

void BasedeDatos::ingresaProducto(){
    Ask algo;
    Producto newProducto;
    string codigoP = algo.askCodigo();
	string articuloP = algo.askArticulo();
	double unidad_principalP = algo.askUnidad();
	double p_ventaP = algo.askPventa();
	double monedaP = algo.askMoneda();
	double costoP = algo.askCosto();
	double stockP = algo.askStock();
    newProducto.setCodigo(codigoP);
    newProducto.setArticulo(articuloP);
    newProducto.setUnidad(unidad_principalP );
    newProducto.setPventa(p_ventaP);
    newProducto.setMoneda(monedaP);
    newProducto.setCosto(costoP);
    newProducto.setStock(stockP);
    //productos.push_back(newProducto);
 }

 void BasedeDatos::ingresaLaptop(){
    Ask algo;
    Laptop newLaptop;
/*
    string codigoP = algo.askCodigo();
	string articuloP = algo.askArticulo();
	double unidad_principalP = algo.askUnidad();
	double p_ventaP = algo.askPventa();
	double monedaP = algo.askMoneda();
	double costoP = algo.askCosto();
	*/
	double stockP = algo.askStock();

    string marcaL = algo.askMarca();
    string modeloL = algo.askModelo();
    string procesadorL = algo.askProcesador();
    /*
    newLaptop.setCodigo(codigoP);
    newLaptop.setArticulo(articuloP);
    newLaptop.setUnidad(unidad_principalP );
    newLaptop.setPventa(p_ventaP);
    newLaptop.setMoneda(monedaP);
    newLaptop.setCosto(costoP);
    */
    newLaptop.setStock(stockP);

    newLaptop.setMarca(marcaL);
    newLaptop.setModelo(modeloL);
    newLaptop.setProcesador(procesadorL);
    newLaptop.print();
   /*
    string codigoP = algo.askCodigo();
    newLaptop.setCodigo(codigoP);
	string articuloP = algo.askArticulo();
	double unidad_principalP = algo.askUnidad();
	double p_ventaP = algo.askPventa();
	double monedaP = algo.askMoneda();
	double costoP = algo.askCosto();
	double stockP = algo.askStock();
    //newLaptop.setCodigo(codigoP);
    newLaptop.setArticulo(articuloP);
    newLaptop.setUnidad(unidad_principalP );
    newLaptop.setPventa(p_ventaP);
    newLaptop.setMoneda(monedaP);
    newLaptop.setCosto(costoP);
    newLaptop.setStock(stockP);
*/

 }

 void BasedeDatos::ingresaSmartphone(){

 }
