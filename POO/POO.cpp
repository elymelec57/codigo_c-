#include <iostream>
#include <stdlib.h>
using namespace std;

class persona
{
  private://atributo
  int edad;
  string nombre;
   public://metodos
     persona(int,string);//constructor
    void leer();
    void correr();
};


//constructor, nos pirmite inicializar los atrivutos
persona::persona(int _edad,string _nombre)
{
  edad = _edad;
  nombre = _nombre;
}

void persona::leer()
{
 cout<<"soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void persona::correr()
{
  cout<<"soy "<<nombre<<" y estoy corriendo un maraton y tengo "<<edad<<" anios"<<endl;
}


int main()
{
  persona p1= persona(19,"ely");
  persona p2(20,"ali");
  persona p3(50,"jose");

  p1.leer();
  p2.correr();

  p3.leer();
  p3.correr();
  cout<<endl;
     
return 0;
}