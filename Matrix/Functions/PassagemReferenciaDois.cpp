#include <iostream>

using namespace std;

void converte(float F, float &C, float &K){

   C = 0.555555555556*(F-32);
   K = C + 273;

}

int main()
{
	float F,C,K;

    C = 0;
    K = 0;
    
    cin >> F;

    converte(F,C,K);
    
    cout<<fixed;
    cout.precision(2);
    cout << F << endl;
    cout << "Celsius: " << C << endl;
    cout << "Kelvin:  " << K << endl;
    
    return 0;
}