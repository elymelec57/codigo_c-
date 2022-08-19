#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
 using namespace std;

int num[3]={1,2,3},*dirm[3];

int main()
{
  for (int i=0;i<3;i++)
   {
    dirm[i]=&num[i];
   }
  for (int i=0;i<3;i++)
    {
     cout<<"el numero: "<<*dirm[i]<<endl;
     }
    for (int i=0;i<3;i++)
    {
     cout<<"direccion de memoria: "<<dirm[i]<<endl;
    }
return 0;
}