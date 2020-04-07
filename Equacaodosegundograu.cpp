#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

double raizum(int delta, int a, int b){

    double raizum;
    raizum = (-b + sqrt(delta))/(2*a);
    return raizum;
}


double raizdois(int delta, int a, int b){

    double raizdois;
    raizdois = (-b - sqrt(delta))/(2*a);
    return raizdois;
}

int main()
{
	int a, b, c; //coeficientes da equacao
    double x1, x2; //raizes
    int delta; 
    
    cin >> a;
    while(a == 0){
        cout << "Entre com o valor a diferente de 0" << endl;
        cin >> a;
    }
      
    cin >> b >> c;

    delta = b*b - 4*a*c;

    if(delta < 0){
        cout << "Nao ha raizes reais" << endl;
    }
    else{
        x1 = raizum(delta,a,b);
        x2 = raizdois(delta,a,b);
      
        if(x1==x2){
            cout << "x = " << x1 << endl;
        }
        else if(x1 < x2){
            cout<<fixed;
            cout.precision(2);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else{
            cout<<fixed;
            cout.precision(2);
            cout << "x1 = " << x2 << endl;
            cout << "x2 = " << x1 << endl;
        }

        
    }

    return 0;

}