#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int N;
	float D;

	cin >> D;

	cout << D << endl;
	N = 0;
	while (D >= 100)
	{
		D = D - 100;
		N = N + 1;
	}
	cout << N << " nota(s) de R$ 100,00" << endl;

	N = 0;
	while (D >= 50)
	{
		D = D - 50;
		N = N + 1;
	}
	cout << N << " nota(s) de R$ 50,00" << endl;

	N = 0;
	while (D >= 20)
	{
		D = D - 20;
		N = N + 1;
	}
	cout << N << " nota(s) de R$ 20,00" << endl;

	N = 0;
	while (D >= 10)
	{
		D = D - 10;
		N = N + 1;
	}
	cout << N << " nota(s) de R$ 10,00" << endl;

	N = 0;
	while (D >= 5)
	{
		D = D - 5;
		N = N + 1;
	}
	cout << N << " nota(s) de R$ 5,00" << endl;

	N = 0;
	while (D >= 2)
	{
		D = D - 2;
		N = N + 1;
	}
	cout << N << " nota(s) de R$ 2,00" << endl;

	N = 0;
	while (D >= 1)
	{
		D = D - 1;
		N = N + 1;
	}
	cout << N << " nota(s) de R$ 1,00" << endl;
	
	return 0;
}
