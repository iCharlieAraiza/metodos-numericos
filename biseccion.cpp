#include <iostream>
#include <math.h>
using namespace std;
static double funcion(double x);
int main() {
  double xi = 1;
  double xf = 1.6;
  double xr = 1;

  if (funcion(xi) * funcion(xf) > 0.0f)
  {
    cout << "la función tiene el mismo signo";
    return -1;
  }
  while ( abs(xi - xf) > 0.00001)
  {
    xr = (xi + xf) / 2.0f;
    cout << "X: " << xr << endl;
    if (funcion(xi) * funcion(xr) < 0.0f)
    {
      xf = xr;
    }
    else
    {
      xi = xr;
    }
  }
  return 0;
}

//Aquí está la función principal

static double funcion(double x)
{ 
  return x * (4*x - 5);
}
