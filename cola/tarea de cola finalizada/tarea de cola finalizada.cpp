#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
    
using namespace std;

struct cola
{
	char nombre[30];
	char cedula[30];
	char transaccion[30];
  float monto;
	int posicion;
 struct cola *siguiente;
 struct cola *anterior;
}co;
struct cola *principio=NULL;
struct cola *final=NULL;
struct cola *nuevo;
struct cola *aux;
int posicion=0;

void agregar(cola *&,cola *&);
void mostrar(cola *);
void sacar(cola *&);

int main()
{
	int elija;
	cout<<"_=========COLA DEL BICENTENARIO===========_"<<endl;
	do
	{
		cout<<"1.-Agregar un nuevo cliente."<<endl;
		cout<<"2.-Ver la cola de los clientes que estan."<<endl;
		cout<<"3.-Atender al cliente."<<endl;
		cout<<"4.-Salir."<<endl;
		cout<<"Elija el numero asignado a la operacion que quiere realizar: ";
		cin>>elija;
     cout<<endl;
      system ("clear");
		switch(elija)
		{
			case 1 : //{
						agregar(principio,final);
						break;
					//}
			case 2 :// {
						mostrar(principio);
						break;
					//}
			case 3 :// {
						sacar(principio);
						break;
				//	}
		}
		
	}while(elija != 4);
   cout<<endl;
   system("clear");
	return 0;
}

void agregar(cola *&principio,cola *&final)
{
	posicion++;
	nuevo=new cola;
	cout<<"Cedula: ";
	cin.ignore();
	cin.getline(nuevo->cedula,30);
	cout<<"Nombre: ";
	cin.getline(nuevo->nombre,30);
	cout<<"Tipo de transaccion: ";
	cin.getline(nuevo->transaccion,30);
   cout<<"monto: ";
   cin>>nuevo->monto;
	nuevo->siguiente = NULL;
	nuevo->posicion = posicion;
	if(principio==NULL)
	{
		nuevo->anterior=NULL;
		principio=nuevo;
		final=nuevo;
	}
	else
	{
		nuevo->anterior=final;
		final->siguiente=nuevo;
		final=nuevo;
	}
 cout<<endl;
}

void mostrar(cola *principio)
{
	 aux = principio;
	while(aux!=NULL)
	{
		cout<<"Cliente numero: "<<aux->posicion<<endl;
		cout<<"Nombre: "<<aux->nombre<<endl;
		cout<<"Cedula: "<<aux->cedula<<endl;
		cout<<"Transaccion a realizar: "<<aux->transaccion<<endl;
     cout<<"monto: "<<aux->monto<<endl;
		aux=aux->siguiente;
     cout<<endl;
	}
	delete aux;
}

void sacar(cola *&principio)
{
   aux = principio;
	principio = aux->siguiente;
	principio->anterior = NULL;
	aux->siguiente = NULL;
	cout<<"Cliente Numero "<<aux->posicion<<" atendido."<<endl;
   cout<<endl;
	delete aux;
}
