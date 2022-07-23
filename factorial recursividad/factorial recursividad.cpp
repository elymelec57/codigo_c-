/*REALIZAR UN PROGRAMA EN C++, QUE PERMITA CALCULAR DE UNA LISTA DE DIEZ 
N�MEROS ENTEROS, EL FACTORIAL DE CADA NUMERO UTILIZANDO RECURSIVIDAD, MOSTRAR:
1-El numero y su factorial.*/

#include <iostream>
using namespace std;

void DATOS();
int FACTORIAL(long n);


long n;
int i=0;
char band = 'V';


int main()
{
	DATOS();
	
cin.get();	
return 0;
}

void DATOS()
{
	cout<<"Hallaremos el factorial de 10 numeros."<<endl;
	cout<<"\n";
	while((band=='V') && (i<10))
	{
		cout<<"--Ingrese un numero: ";
		cin>>n;
		
		cout<<"--Este es el factorial del numero "<<i+1<<".  -> "<<FACTORIAL(n)<<endl;
		cout<<"\n\n";
		
	i++;		
	}
	cout<<"--------------------------------------"<<endl;
	cout<<"Gracias por usar nuestro programa :D."<<endl;
	cout<<"--------------------------------------"<<endl;
}

int FACTORIAL(long n)
{
	if(n == 0)
	{
		n = 1;
	}
	else
	{
		n = n * FACTORIAL(n-1);
	}
	
	return n;
}


