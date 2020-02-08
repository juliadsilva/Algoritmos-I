#include <iostream>

using namespace std;

int main()
{

	double A, B, C;
	double AT, AC, ATA, AQ, AR;

	cin >> A >> B >> C;

	AT = (A * C) / 2;

	AC = (3.14159 * C * C);

	ATA = ((A + B) * C) / 2;

	AQ = B * B;

	AR = A * B;

	cout << fixed;
	cout.precision(3);
	cout << "TRIANGULO: " << AT << endl;
	cout << "CIRCULO: " << AC << endl;
	cout << "TRAPEZIO: " << ATA << endl;
	cout << "QUADRADO: " << AQ << endl;
	cout << "RETANGULO: " << AR << endl;

	return 0;

}