#include <cstdlib>
#include <iostream>
#include <cmath>
#include<cstdio>
#define ESP 0.005
#define F(x) (x*x*x)-(2*x)-5
using namespace std;
int main()
{
  float x0,x1,x2,f1,f2,f0;
  int count=0;

  do
  {
  printf("\nEnter the value of x0: ");
  scanf("%f",&x0);
  }while(F(x0) > 0);

  do
  {
  printf("\nEnter the value of x1: ");
  scanf("%f",&x1);
  }while(F(x1) < 0);

  printf("\n__________________________________________________________\n");
  printf("\n    x0\t       x1\t x2\t   f0\t   f1\t   f2");
  printf("\n__________________________________________________________\n");

  do
  {
  f0=F(x0);
  f1=F(x1);
  x2=x0-((f0*(x1-x0))/(f1-f0));
  f2=F(x2);
  printf("\n%f %f %f %f %f %f",x0,x1,x2,f0,f1,f2);
  if(f0*f2<0)
   {
    x1=x2;
   }
   else
   {
    x0 = x2;
   }
  }while(fabs(f2)>ESP);
printf("\n__________________________________________________________\n");
printf("\n\nApp.root = %f",x2);
return  0;
}
