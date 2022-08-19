#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;
int n1,n2;
char coment[300],resp1;
int resp=0;
int suma,resta,multi,divi,nro,pot,resul;

int main ()
{
 cout<<"============SI ENTRASTE EN ESTE PROGRAMA ES POR QUE ERES UN CURIOSO AMIGO, PERO DE TODO MODOS ERES BIENVENIDO!!!!=============="<<endl;
    cout<<endl;
   cout<<"Esta es la primera face de el programa"<<endl;
cout<<endl;
   cout<<"=========>1: suma"<<endl;
   cout<<"=========>2: resta"<<endl;
   cout<<"=========>3: multiplicacion"<<endl;
   //cout<<"=========>4: divicion"<<endl;//
cout<<endl;
   cout<<"Cual de las operaciones quiere hacer"<<endl;
cout<<endl;
   cout<<"introduzca el numero asignado [nota: solo prodra ingresar 2 numeros]: ";
   cin>>resp;
   if (resp==1)
   {
    cout<<"introduzca el primer numero: ";
     cin>>n1;
     cout<<endl;
     cout<<"introduzca el segundo numero: ";
     cin>>n2;
     cout<<endl;
     suma=n1+n2;
     cout<<"Esta es la suma: "<<suma<<endl;
   }
   else
     {
      if (resp==2)
         {
          cout<<"introduzca el primer numero: ";
          cin>>n1;
          cout<<endl;
          cout<<"introduzca el segundo numero: ";
          cin>>n2;
          resta=n1-n2;
          cout<<"La resta es: "<<resta<<endl;
         }
          else
              {
                cout<<"introduzca el primer numero: ";
                cin>>n1;
                cout<<endl;
                cout<<"introduzca el segundo numero: ";
                cin>>n2;
                multi=n1*n2;
                cout<<"Esta es la multiplicacion: "<<multi<<endl;
              }
         }
  /*while (resp==4)
  {
   cout<<"introduzca el primer numero: ";
   cin>>n1;
   cout<<endl;
   cout<<"introduzca el segundo numero: ";
   cin>>n2;
   divi=n1/n2;
   cout<<"Esta es la division: "<<divi<<endl;
  }  */   
   cout<<"QUIERES ESCRIBIR UN COMENTARIO [s/n]"<<endl;
   cin>>resp1;
   if (resp1=='s')
   {
   cout<<"Escribe tu comentario: ";
   cin>>coment;
   cout<<"Esto es lo q usted escribio: "<<coment<<endl;
   }
    else
    {
    cout<<"Eres madre flojo"<<endl;    
}
   
    cout<<endl;
    cout<<"un poco mas complicado, busquemos la potencia de un numero";
    cout<<endl;
    cout<<"introduzca el numero que quiere elevar: ";
    cin>>nro;
    cout<<"introduzca la potencia: ";
    cin>>pot;
    cout<<endl;

    nro=nro+nro*pot;
    
    cout<<"Este es el resultado: "<<nro<<endl;
return 0;
}