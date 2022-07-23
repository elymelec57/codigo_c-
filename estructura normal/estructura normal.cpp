#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
 using namespace std;

struct persona{
    char persona[20];
    int edad;
}persona1;

int main()
{
  cout<<"introduzca su nombre: ";
  cin.getline(persona1.persona,20,'\n');
  cout<<"entroduzca su edad: ";
  cin>>persona1.edad;
  
  cout<<"estos son los datos:\n";
  cout<<"su nombre:"<<persona1.persona<<endl;
  cout<<"su edad:"<<persona1.edad<<endl;
return 0;
}
  