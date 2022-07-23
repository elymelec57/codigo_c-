#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
   int main ()
{
   int cantidad=0,acumu=0,precio,pre_helado=600,dinero,buelto;
   char sabor[40];
    cout<<"======================================================================================="<<endl;
    cout<<"ESTOS SON LOS HELADOS A VENDER"<<endl;
    cout<<"===============================GRAN VARIEDAD==========================================="<<endl;
    cout<<"CHOCOLATE"<<endl;
    cout<<"TIZANA"<<endl;cout<<"FRESA"<<endl;cout<<"MANTECADO"<<endl;cout<<"TORNADO"<<endl;
    cout<<"PASTELADO"<<endl;
   cout<<"////////////////////////////////////////////////////////////////////////////////////////"<<endl;
   cout<<"CUANTOS HELADOS DESEA COMPRAR:";
   cin>>cantidad;
   cout<<"////////////////////////////////////////////////////////////////////////////////////////"<<endl;
   system("clear");
   for (int i=0; i<cantidad; i++)
   {
   cout<<"INTRODUZCA EL SABOR QUE DESEA"<<endl;
   cin>>sabor;
    if (sabor)   cout<<"           "<<sabor<<endl;
   cout<<"////////////////////////////////////////////////////////////////////////////////////////"<<endl;
   }
    system("clear");
    cout<<"////////////////////////////////////////////////////////////////////////////////////////"<<endl;
    precio=cantidad*pre_helado;
    cout<<"DEBES PAGAR ESTA CANTIDAD PARA OBTENER EL HELADO:"<<precio<<endl;
    cout<<"///////////////////////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"CUANTO ES EL DINERO QUE DESEAS INTRODUZIR"<<endl;
    cin>>dinero;
    system("clear");
    buelto=dinero-precio;    
    if (dinero>=precio) 
        cout<<"GRASIAS POR TU COMPRA"<<endl;
    if (dinero>precio) 
    cout<<"ESTE ES TU CANBIO:"<<buelto<<endl;
    if (dinero<precio)
      cout<<"TE FALTA DINERO"<<endl;
   cout<<"//////////////////////////////////////////////////////////////////////////////////////"<<endl;
   
}