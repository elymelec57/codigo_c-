#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

struct producto
{
  char codigo[10];
  char producto[20];
  float presio;
struct producto *siguiente;
}pro;

struct producto *pila=NULL;

void insertarpila(producto *&pila);
void mostraproductos(producto *&pila);
void sacardatos(producto *&pila);

char rpt='s';
int elija;

int main()
{
  cout<<"_=====INVENTARIO DE PRODUCTOS PERESEDEROS======_"<<endl;
  do{
     cout<<"1.- insertar producto"<<endl;
     cout<<"2.- mostrar producto"<<endl;
     cout<<"3.- eliminar producto"<<endl;
     cout<<"4.- salir de inventario"<<endl;
     cout<<"elija la operacion con el numero asignado: ";
     cin>>elija;
     cout<<endl;
     system("clear");
  switch(elija)
      {
        case 1: 
        {
         fflush (stdin);
         while((rpt=='s')||(rpt=='S'))
          {
          
           insertarpila(pila);
  

           cout<<"desea introduzir mas productos [s/n]: ";
           cin>>rpt;
           system("clear");
           }
           break;
           }
 case 2:
        {
         mostraproductos(pila);
         break;   
        }
 case 3:
        {
        sacardatos(pila);
        break;
        }
      } 
  }while(elija!=4);
/* cout<<endl;
  cout<<"estos son los productos con sus caracteristicas"<<endl;
  cout<<endl;
  while (pila != NULL)
{
  sacardatos(pila);
}
  if (pila != NULL)
   {
     cout<<"codigo: "<<pro.codigo<<endl;
     cout<<"producto: "<<pro.producto<<endl;
     cout<<"presio: "<<pro.presio<<endl;
   }
  else
    {
     cout<<"codigo: "<<pro.codigo<<endl;
     cout<<"producto: "<<pro.producto<<endl;
     cout<<"presio: "<<pro.presio<<endl;
     }*/
  
return 0;
}

void insertarpila(producto *&pila)
{
  producto *nuevo=new producto();
   cout<<"introduzca el codigo del producto: ";
           cin.ignore();
           cin.getline(nuevo->codigo,10);
           cout<<endl;
           cout<<"introduzca el nombre del producto: ";
           cin.getline(nuevo->producto,20);
           cout<<endl;
           cout<<"introduzca el presio del producto: ";
           cin>>nuevo->presio;
 
  nuevo->siguiente=pila;
  pila=nuevo;
}

void mostraproductos(producto *&pila)
{
 producto *aux = pila;
 while(aux!=NULL)
    {
     cout<<"codigo: "<<aux->codigo<<endl;
     cout<<"producto: "<<aux->producto<<endl;
     cout<<"presio: "<<aux->presio<<endl;
     aux = aux->siguiente; 
    cout<<endl;
    }
    delete aux;
}
void sacardatos(producto *&pila)
{
  producto *aux=pila;
  pila=aux->siguiente;
  aux->siguiente=NULL;
  //aux->presio;
 // pila=aux->siguiente;
  delete aux;
  cout<<endl;
}
