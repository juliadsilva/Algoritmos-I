#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double A, B, C;
	double d, delta;
	double R1, R2;

	cin >> A >> B >> C;

	d = (B * B) - (4 * A * C);

	if (d<0 || A == 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		delta = sqrt(d);
		R1 = (-B + delta) / (2 * A);
		R2 = (-B - delta) / (2 * A);

		cout << fixed;
		cout.precision(5);
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}

	return 0;
}