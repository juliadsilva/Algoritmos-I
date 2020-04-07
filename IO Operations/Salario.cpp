#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,H;
    float V;
    float S;
    
    cin >> N;
    cin >> H;
    
	cin >> fixed;
   	cin.precision(2);
	cin >> V;
        
    S = H*V;
    
    cout<< "NUMBER = " << N << endl;
	cout<< fixed;
    cout.precision(2);
    cout << "SALARY = US$ " << S << endl;
 
    return 0;
}