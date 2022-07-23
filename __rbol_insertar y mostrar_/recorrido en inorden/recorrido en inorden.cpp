#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo
{
 int dato;
 nodo *izquierda;
 nodo *derecha;
};

void menu();
struct nodo *arbol;
void insertarnodo(nodo *&,int);
void mostrararbol(nodo *,int);
bool buscarelemento(nodo *,int);
void preorden(nodo *arbol);
void inorden(nodo *);
void postorden(nodo *);

nodo *crearnodo(int);
int main()
{
   
   menu(); 
    
return 0;
}

nodo *crearnodo(int n)
{
  nodo *nuevo=new nodo();
  nuevo->dato=n;
  nuevo->derecha=NULL;
  nuevo->izquierda=NULL;
    
  return nuevo;
}

void menu()
{
  int dato,opc,cont=0;
  char res='s';
    do{
        cout<<"=========MENU============"<<endl;
        cout<<"1-: introduzca un elemento"<<endl;
        cout<<"2-: mostrar datos"<<endl;
        cout<<"3-: buscar elemento"<<endl;
        cout<<"4-: recorrer en preorden el arbol"<<endl;
        cout<<"5-: recorrido en inorden del arbol"<<endl;
        cout<<"6-: recorrido en postorden del arbol"<<endl;
        cout<<"7-: salir"<<endl;
        cout<<"opcion: ";
        cin>>opc;   
     switch(opc)
      {
            
              
       case 1:
              cout<<"introduzca un elemento: ";
              cin>>dato;
              system("clear");
              insertarnodo(arbol,dato);
              cout<<endl;
              break;
       case 2: cout<<"te mostramos los elementos"<<endl;
               mostrararbol(arbol,cont);
               break;
       case 3:
            cout<<"introduzca el elemento a buscar: ";
            cin>>dato;
            if (buscarelemento(arbol,dato) == true)
             {
             cout<<"el elemento "<<dato<<" a sido encontrado"<<endl;
             }
            else
            {
             cout<<"el elemento "<<dato<<" no existe"<<endl;
            }
            break;
      case 4:
            cout<<"este es el preorden del arbol: ";
            preorden(arbol);
            cout<<endl;
            break;
      case 5:
            cout<<"este es el inorden del arbol: ";
            inorden(arbol);
            cout<<endl;
            break;
      case 6:
            cout<<"este es el postorden del arbol: ";
            postorden(arbol);
            cout<<endl;
            break;
      }
    
    }while(opc!=7);
}

void insertarnodo(nodo *&arbol,int n)
{
  if (arbol==NULL)//si el arbol esta vacio
    {
     nodo *nuevo = crearnodo(n);
     arbol=nuevo;
    }
    else
        {//si el arbol tiene uno o mas 
         int valorraiz=arbol->dato;
          if (n < valorraiz)//sie el elemento es menor que la raiz, insertar por la izq
            {
             insertarnodo(arbol->izquierda,n);
            }
           else 
            {//si el elemento es mayor que la raiz, insertar por la derecha
              insertarnodo(arbol->derecha,n);
            }
        }
}

void mostrararbol(nodo *arbol,int cont)
{
 
    if (arbol==NULL)//si el arbol esta vacio
    {
     return ;
    }
    else
  {
    mostrararbol(arbol->derecha,cont+1);
      for (int i=0; i<cont;i++)  
        {
        cout<<"   ";
        } 
     cout<<arbol->dato<<endl;
     mostrararbol(arbol->izquierda,cont+1);
  }
}

bool buscarelemento(nodo *arbol,int n)
{
  if (arbol==NULL)
    {
     return false;
    }
    else if(arbol->dato==n)
    {
     return true;
    }
    else if(n < arbol->dato)
    {
     return buscarelemento(arbol->izquierda,n);
    }
   else
    {
     return buscarelemento(arbol->derecha,n);
    }
}

void preorden(nodo *arbol)
{
  if (arbol==NULL)
    {
     return ;
    }
    else
    {
     cout<<arbol->dato<<" - ";
     preorden(arbol->izquierda);
     preorden(arbol->derecha);
    }
}

void inorden(nodo *arbol)
{
 if (arbol==NULL)
    {
     return ;
    }
   else
     {
      inorden(arbol->izquierda);
      cout<<arbol->dato<<" - ";
      inorden(arbol->derecha);
     }
}

void postorden(nodo *arbol)
{
 if (arbol==NULL)
    {
     return ;
    }
   else
    {
     postorden(arbol->izquierda);
     postorden(arbol->derecha);
     cout<<arbol->dato<<" - ";
    }
}