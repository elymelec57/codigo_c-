#include <iostream>
#include <stdlib.h>
using namespace std;

class punto
{
  private: //atrivuto
    int x,y;
  public://metodos
    punto();//contructor
    void setpunto(int,int);
    int getpuntox();
    int getpuntoy();
};

punto::punto();
{

}

//estableser valores a lo atrivutos
void punto::setpunto(int _x,int _y)
{
  x = _x;
  y = _y;
}

int punto::getpuntox();
{
 return x;
}

int punto::getpuntoy();
{
 return y;
}

int main()
{

  punto punto1;
  punto setpunto(12,10);

  cout<<punto1.getpuntox()<<endl;
  cout<<punto1.getpuntoy()<<endl;

return 0;
}