#include <iostream>
#include <stdlib.h>

using namespace std;

struct numero
{
 int dato;
 numero *siguiente;
};

 //struct numero *inicio,*fin;	
 struct numero *lista=NULL;
 
void menu();
void insertarlista(numero *&,int);
void mostrarelemento(numero *,int);
void buscarelemento(numero *,int);
void eliminarnodo(numero *&,int);

int dato;

int main ()
{
  
    
  menu();
  
	
return 0;	
}

void menu()
{
  int opc,dato;

  do{
      cout<<"================[MENU]================="<<endl;
      cout<<"1:-insetar elemento en la lista"<<endl;
      cout<<"2:-mostrar elemento de la lista"<<endl;
      cout<<"3:-buscar elemento en la lista"<<endl;
      cout<<"4:-eliminar un elemento de la lista"<<endl;
      cout<<"5:-salir del programa"<<endl;
      cout<<"opcion: ";
      cin>>opc;
      system("clear");
      switch (opc)
      {
             case 1:
                
                    cout<<"introdusca un elemento: ";
                    cin>>dato;
                    insertarlista(lista,dato);
                    cout<<endl;
                    break;
                
             case 2:
                 
                    cout<<"estos son los elemento de la lista"<<endl;
                    cout<<endl;
                    mostrarelemento(lista,dato);
                    cout<<endl;
                    break;
                
             case 3:
                
                    cout<<"introdusca un elemento a buscar en la lista"<<endl;
                    cin>>dato;
                    cout<<endl;
                    buscarelemento(lista,dato);
                    cout<<endl;
                    break;
            case 4:
                   cout<<"introdusca un elemento a eliminar"<<endl;
                   cin>>dato;
                   eliminarnodo(lista,dato); 
                   cout<<endl;        
      }
    }while (opc != 5);
}

void insertarlista(numero *&lista,int n)
{
  numero *nuevo = new numero();
    nuevo->dato = n;
  numero *inicioaux1 = lista;
  numero *finaux2;
  while ((inicioaux1!= NULL)&&(inicioaux1->dato < n))
    {
      finaux2 = inicioaux1;
      inicioaux1 = inicioaux1->siguiente;
    }
    if (lista == inicioaux1)
      {
       lista = nuevo;
      }
    else 
      {
       finaux2->siguiente = nuevo;
      }
    nuevo->siguiente = inicioaux1;
}

void mostrarelemento(numero *lista,int n)
{
  numero *actual = new numero();
    actual = lista;
   while (actual != NULL)
     {
      cout<<actual->dato<<" -> ";
      actual = actual->siguiente;
     }
    cout<<endl;
}

void buscarelemento(numero *lista,int n)
{
 bool band = false;
    
 numero *actual = new numero();
    actual = lista;
 while ((actual != NULL)&& (actual->dato <= n))
    {
       if (actual->dato==n)
         {
          band = true;
         }
       actual=actual->siguiente;
    }
    
   if (band == true)
    {
      cout<<"el numero "<<n<<" a sido encontrado en la lista"<<endl;
    }
   else
    {
     cout<<"el numero "<<n<<" no existe en la lista"<<endl;
    }
}

void eliminarnodo(numero *&lista,int n)
{
  if (lista != NULL)
    {
      numero *aux_borrar;
      numero *anterior = NULL;
      aux_borrar = lista;
        
        //recorrer la lista
        while ((aux_borrar != NULL)&&(aux_borrar->dato != n))
           {
              anterior = aux_borrar;
              aux_borrar = aux_borrar->siguiente;
           }
        //el elemento no ha sido encontrado en la lista
        if(aux_borrar==NULL)
         {
           cout<<"el elemento "<<n<<" no existe en la lista"<<endl;
         }
        //el primer nodo es el q vamos a eliminar
        else if (anterior == NULL)
         {
           cout<<"el elemento "<<n<<" a sido encontrado con exito"<<endl;
         }
        //el elemento esta en la lista pero, no es el primero nodo
        else
         {
           anterior->siguiente = aux_borrar->siguiente;
           delete aux_borrar;
         }
    }
}
