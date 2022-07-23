#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
 using namespace std;

int suma(int n1,int n2);
void resta(int n1,int n2);
template <class numero>
void mostrarnumero(numero mostrar);

int n1,n2;
int n3=4;
float n5=5;
double n6=6;
char letra='A';
int main ()
{
  cout<<"introduzca 2 numeros para sumarlos: ";
  cin>>n1>>n2;
  cout<<n1<<" "<<n2<<endl;
  cout<<"esta es la suma: "<<suma(n1,n2)<<endl;
  resta(n1,n2);
  mostrarnumero(n3);
   mostrarnumero(n5);
   mostrarnumero(n6); 
   mostrarnumero(letra);
 return 0;
}

int suma(int n1,int n2)
{
  int suma=0;

  suma=n1+n2;
    
 return suma;
}

void resta(int n1,int n2)
{
  int resta=0;
   resta=n1-n2;
   cout<<"la resta es :"<<resta<<endl;

}

template <class numero>
void mostrarnumero(numero mostrar)
{
  cout<<n3<<endl;
  cout<<n5<<endl;
  cout<<n6<<endl;
  cout<<letra<<endl;
}