//Libreria:
#include<iostream>
using namespace std;
void leeCadena(int cant,int n[])
{
	int i;
	for(i=0;i<cant;i++)
	{
		cout<<"Ingresa elemento en A["<<i<<"] : ";
		cin>>n[i];
	}
	
}

void muestraCadena(int cant,int n[])
{
	int i;
	for(i=0;i<cant;i++)
	{
		cout<<"A["<<i<<"] : "<<n[i]<<endl;
	}
}
