#include <iostream>
#include <stdio.h>
using namespace std;
int numero[3][3];
int main ()
 {
    
    for (int f=0;f<=2;f++)
    {
       for (int c=0;c<=2;c++)
        {
         cout<<"introduzca numero:";
         cin>>numero[f][c];
         }
     }
    cout<<"esta es el arreglo original"<<endl;
    
    for ( int f=0;f<=2;f++)
     {
       for (int c=0;c<=2;c++)
       {
        cout<<numero[f][c]<<"   "<<"   ";
       }
        cout<<endl;
     }
    cout<<"estae es el arreglo invertido"<<endl;
    for ( int f=2;f>=0;f--)
     {
       for (int c=2;c>=0;c--)
       {
        cout<<numero[f][c]<<"   "<<"   ";
       }
        cout<<endl;
     }
 
  return 0;
}