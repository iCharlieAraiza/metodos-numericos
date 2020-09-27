#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>


#define    f(x)    (0.95*x*x*x)-5.9*x*x+(10.9*x-6)
#define   g(x)   2.85*x*x-11.8*x+10.9

using namespace std;

int main()
{
	 float x0, x1, f0, f1, g0, e;
	 int step = 1, N;

     cout<< setprecision(6)<< fixed;

        x0 = 3.5;
        e = 0.0001;	 
        N = 3;

	 cout<< endl<<"*********************"<< endl;
	 cout<<"Solución por método de Newton Raphson"<< endl;
	 cout<<"*********************"<< endl;
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  if(g0 == 0.0)
		  {
			   cout<<"Mathematical Error.";
			   exit(0);
		  }


		  x1 = x0 - f0/g0;


		  cout<<"Iteración-"<< step<<":\t x = "<< setw(10)<< x1<<" y f(x) = "<< setw(10)<< f(x1)<< endl;
		  x0 = x1;

		  step = step+1;

		  f1 = f(x1);

	 }while(fabs(f1)>e);

	 cout<< endl<<"La raiz es: "<< x1;
	 return 0;
}
