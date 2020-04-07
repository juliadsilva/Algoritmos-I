#include <iostream>
#include <cmath>

using namespace std;

float calculapesoideal(float altura, char sexo){

    float peso;
    peso = 0;

    if(sexo == 'M'){
        peso = 72.7 * altura - 58;
    }
    else if(sexo == 'F'){
        peso = 62.1 * altura - 44.7;
    }
     
    return peso;
}


int main()
{

	float h; //altura
    char s; //sexo F: feminino e M: masculino
    float pesoideal;

    cin >> h >> s;

    pesoideal = calculapesoideal(h,s);

    cout<<fixed;
    cout.precision(2);
    cout << "Peso ideal = " << pesoideal << " kg" << endl;

    return 0;

}