#include <iostream>
 
using namespace std;
 
int main() {
 
   	double total;
	double preco;
	double troco;
	
	cin >> total >> preco;
	
	troco = total - preco;
	
	cout << fixed;
	cout.precision(2);
	cout << "TROCO = " << troco << endl;

 
    return 0;
}