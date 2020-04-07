#include <iostream>
#include <cmath>

using namespace std;

int sinal(int numero){

    if(numero < 0) 
        return -1;
    else if (numero > 0)
        return 1;
    else return 0;
     
}


int main()
{

	int num; //numero
    int posneg; //returno da funçao
    
    cin >> num;

    posneg = sinal(num);

    if(posneg == 1)
        cout << "Positivo" << endl;

    if(posneg == -1)
        cout << "Negativo" << endl;
    
    if(posneg == 0)
        cout << "Zero" << endl;

    return 0;

}