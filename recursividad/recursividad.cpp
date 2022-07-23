#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

void pedirdato();
int factorial(long nro);

long nro;
int j=0;

int main()
{
	pedirdato();
		
return 0;
}

void pedirdato()
{
	cout<<"TE MOSTRAREMOS EL FACTORIAL DE LOS 10 NUMEROS QUE INTRODUZCA.\n"<<endl;

	for (int i=1;i<11;i++)
	{
		cout<<"introduzca un numero: ";
		cin>>nro;
		cout<<"Este es el factorial del numero que introdujo: "<<factorial(nro)<<endl;
     cout<<endl;	
	}
}

int factorial(long nro)
{
	if(nro==0)
	{
		nro=1;
	}
	else
	{
		nro *=factorial(nro-1);
	}
	
	return nro;
}


