#include <bits/stdc++.h> 
using namespace std; 

float f(float x){ 
    float f = (0.95*x*x*x)-5.9*x*x+(10.9*x-6); 
    return f; 
} 
  
void secante(float x1, float x2, float E){ 
    float n = 0, xm, x0, c; 
    if (f(x1) * f(x2) < 0) { 
        do { 
            x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)); 
  
            c = f(x1) * f(x0); 
  
            x1 = x2; 
            x2 = x0; 
  
            n++; 
  
            if (c == 0) 
                break; 
            xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)); 
        } while (n<3); 
        cout << "La raíz es = " << x0 << endl; 
    }
} 
  

int main() 
{ 

    float x1 = 2.5, x2 = 3.5, E = 0.0001; 
    
    cout<< endl<<"*********************"<< endl;
	cout<<"Solución por método de la secante"<< endl;
	cout<<"*********************"<< endl;
    
    secante(x1, x2, E); 
    
    return 0; 
} 
