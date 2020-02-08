#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int vezes;
	cin >> vezes;

	for (int t = 0; t <  vezes; t++)
	{
		int n; //numero lido
		int r; //raiz quadrada
		int i = 0; //contador
		bool f = true; //flag para indentificar primo

		// Ler o numero
		cin >> n;

		/* Se um numero n�o for divisivel por nenhum numero entre 1 e a raiz quadrada dele,
		* com excessao do 1, ele e primo.
		* Com essa abordagem, se torna poss�vel reduzir o tempo de execu��o
		*/

		r = sqrt (n);

		if(n == 1 || n == 2) //Um e dois sao primos
		{
			cout << n << " eh primo" << endl;
		}
		else
		{
			for(i = 2; i <= r; i++) //teste at� a raiz quadrada
			{
				if (n % i == 0)
				{
					f = false;
					break;
				}
			}

			if (f) cout << n << " eh primo" << endl;
			else cout << n << " nao eh primo" << endl;
		}
	}
	return 0;
}
