#include <iostream>
#include <cmath>

using namespace std;

int calculadelta(int A, int B, int C){

    int resultado;

    resultado = B*B - 4*A*C;

    return resultado;
     
}


int main()
{

	int a, b, c; //coeficientes da equacao
    int delta;

    cin >> a;
    while(a == 0){
        cout << "Entre com o valor a diferente de 0" << endl;
        cin >> a;
    }
    
    cin >> b >> c;

    delta = calculadelta(a,b,c);

    cout << "delta = " << delta << endl;

    return 0;

}