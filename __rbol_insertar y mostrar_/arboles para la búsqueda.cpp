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
    do{
        cout<<"=========MENU============"<<endl;
        cout<<"1-: introduzca un elemento"<<endl;
        cout<<"2-: mostrar datos"<<endl;
        cout<<"3-: buscar elemento"<<endl;
        cout<<"4-: salir"<<endl;
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
      }
    
    }while(opc!=4);
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