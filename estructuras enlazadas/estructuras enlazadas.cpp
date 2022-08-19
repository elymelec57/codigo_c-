#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
 using namespace std;

struct info_direccion
 {
    char direccion[40];
    char ciudad[40];
    char provincia[40];
};

struct persona
 {
    char persona[20];
    struct info_direccion lugar_p;
    int edad;
}persona1[2];

int main()
{
  for (int i=0;i<2;i++)
 {
  fflush(stdin);
  cout<<"introduzca su nombre: ";
  cin.ignore();
  cin.getline(persona1[i].persona,20,'\n');
  cout<<"introduca su direccion: ";
  cin.getline(persona1[i].lugar_p.direccion,40,'\n');
  cout<<"introduzca su ciudad: ";
  cin.getline(persona1[i].lugar_p.ciudad,40,'\n');
  cout<<"introduzca su provincia: ";
  cin.getline(persona1[i].lugar_p.provincia,40,'\n');
  cout<<"entroduzca su edad: ";
  cin>>persona1[i].edad;
  cout<<endl;
 }
  //imprimir datos
    for (int i=0;i<2;i++)
  {
   fflush(stdin);
  cout<<"estos son los datos:\n";
  cout<<"su nombre:"<<persona1[i].persona<<endl;
  cout<<"su direccion:"<<persona1[i].lugar_p.direccion<<endl;
  cout<<"su ciudad:"<<persona1[i].lugar_p.ciudad<<endl; 
  cout<<"su provincia:"<<persona1[i].lugar_p.provincia<<endl;   
  cout<<"su edad:"<<persona1[i].edad<<endl;
 }
return 0;
}
  