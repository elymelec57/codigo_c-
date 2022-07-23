#include <iostream>
#include <stdlib.h>
using namespace std;

class fecha
{
 private://atrivutos
    int dia,mes,ano;
 public://metodos
   fecha(int ,int, int );//constructor 1
   fecha(long);//constructor 2
   void mostrarfecha();
};

//constructor 1
fecha::fecha(int _dia,int _mes, int _ano)
{
  ano = _ano;
  mes = _mes;
  dia = _dia;
}

//contructor 2
fecha::fecha(long)
{
 ano = int (fecha/10000);//extraer el ano
 mes = int (fecha-ano*10000)/100);//extraer el mes
 dia = int (fecha-ano*10000-mes*100);//extraer el dia
}
 
void fecha::mostrarfecha()
{
 cout<<" la fecha es "<<dia<<"/"<<mes<<"/"<<ano<<endl;
}

int main()
{
  fecha hoy (1,6,2017);
  fecha ayer (20170531);

  hoy.mostrarfecha();
  ayer.mostrarfecha();
  cout<<endl;
return 0;
}